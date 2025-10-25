import os
import subprocess
import re
import csv

# Paths
SUBMISSIONS_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'Fall_2025', 'MIAE-215-2252-XX-Assignment 1-4288165'))
RESULTS_FOLDER_NAME = 'results'
STATUS_CSV = os.path.join(os.path.dirname(__file__), 'results', 'run_status.csv')

# Test cases
TEST_CASES = [
    ('3 5', 'test1.txt'),
    ('2 2', 'test2.txt'),
    ('10 20', 'test3.txt'),
    ('26 40', 'test4.txt'),
]

TIMEOUT_SECONDS = 10

def remove_prompt_lines(text):
    lines = text.splitlines()
    filtered = []
    i = 0
    # Remove prompt and user input lines only at the start
    while i < len(lines):
        lstripped = lines[i].lstrip()
        if re.search(r'Please enter', lstripped):
            i += 1
            # If next line is user input, skip it too
            if i < len(lines) and re.match(r'^[0-9]+\s+[0-9]+$', lines[i].lstrip()):
                i += 1
            continue
        break
    # Now, look for the first line that starts with a sequence of 'a' (the top face)
    while i < len(lines):
        lstripped = lines[i].lstrip()
        # Find the first line that starts with at least two 'a' (for box width >=2)
        if re.match(r'^a{2,}', lstripped):
            break
        i += 1
    # Add the rest of the lines (the box)
    for j in range(i, len(lines)):
        lstripped = lines[j].lstrip()
        if lstripped:
            filtered.append(lstripped)
    return '\n'.join(filtered) + '\n' if filtered else ''

def find_cpp_file(folder_path):
    for file in os.listdir(folder_path):
        fname = file.lower()
        # Convert .cpp.txt or .txt to .cpp
        if fname.endswith('.cpp.txt') or fname.endswith('.txt'):
            new_name = file.rsplit('.', 1)[0] + '.cpp'
            new_path = os.path.join(folder_path, new_name)
            os.rename(os.path.join(folder_path, file), new_path)
            return new_name
        if fname.endswith(('.cpp', '.c', '.cc', '.cxx', '.c++', '.cp')):
            return file
    return None

def read_status_csv():
    if not os.path.exists(STATUS_CSV):
        return None
    status = {}
    with open(STATUS_CSV, encoding='utf-8') as f:
        reader = csv.DictReader(f)
        for row in reader:
            status[row['Student ID']] = row
    return status

def run_and_capture():
    student_folders = [f for f in os.listdir(SUBMISSIONS_DIR) if os.path.isdir(os.path.join(SUBMISSIONS_DIR, f))]
    print(f"Found {len(student_folders)} student submissions. Starting run & capture...")
    status_rows = []
    prev_status = read_status_csv()
    for idx, student_folder in enumerate(student_folders, 1):
        folder_path = os.path.join(SUBMISSIONS_DIR, student_folder)
        match = re.match(r'(.+?)_(\d+)_assignsubmission_file', student_folder)
        if not match:
            print(f"[{idx}] Skipping folder: {student_folder} (invalid format)")
            continue
        student_name, student_id = match.groups()
        # If CSV exists and student previously succeeded, skip
        if prev_status and student_id in prev_status:
            prev = prev_status[student_id]
            if prev['Compile Status'] == 'Success' and all(prev[f'Test {i+1}'] == 'Success' for i in range(len(TEST_CASES))):
                print(f"[{idx}] Skipping {student_name} ({student_id}) - previously successful.")
                continue
        print(f"[{idx}] Processing {student_name} ({student_id})...")
        # Find C++ file
        cpp_file = find_cpp_file(folder_path)
        if not cpp_file:
            print(f"    No C++ file found.")
            status_rows.append({
                'Student Name': student_name,
                'Student ID': student_id,
                'Compile Status': 'No file',
                **{f'Test {i+1}': 'Not run' for i in range(len(TEST_CASES))},
                'Comment': 'No C++ file found'
            })
            continue
        cpp_path = os.path.join(folder_path, cpp_file)
        exe_path = os.path.join(folder_path, 'assignment1.exe')
        # Ensure results folder exists before any file write
        results_dir = os.path.join(folder_path, RESULTS_FOLDER_NAME)
        os.makedirs(results_dir, exist_ok=True)
        # Compile
        try:
            compile_result = subprocess.run(['g++', cpp_path, '-o', exe_path], capture_output=True, text=True, timeout=20)
            with open(os.path.join(results_dir, 'compile.txt'), 'w', encoding='utf-8', errors='replace') as f:
                f.write(compile_result.stdout)
                f.write(compile_result.stderr)
            if compile_result.returncode != 0:
                print(f"    Compilation failed.")
                status_rows.append({
                    'Student Name': student_name,
                    'Student ID': student_id,
                    'Compile Status': 'Fail',
                    **{f'Test {i+1}': 'Not run' for i in range(len(TEST_CASES))},
                    'Comment': 'Compilation failed'
                })
                continue
        except Exception as e:
            with open(os.path.join(results_dir, 'compile.txt'), 'w', encoding='utf-8', errors='replace') as f:
                f.write(f'Compile error: {e}')
            print(f"    Compile error: {e}")
            status_rows.append({
                'Student Name': student_name,
                'Student ID': student_id,
                'Compile Status': 'Error',
                **{f'Test {i+1}': 'Not run' for i in range(len(TEST_CASES))},
                'Comment': f'Compile error: {e}'
            })
            continue
        # Run test cases
        test_status = []
        for i, (test_input, result_file) in enumerate(TEST_CASES):
            result_path = os.path.join(results_dir, result_file)
            # Try both input formats: single line and separate lines
            input_single = f'{test_input}\n'
            try:
                run_result = subprocess.run(
                    exe_path,
                    input=input_single,
                    capture_output=True,
                    text=True,
                    timeout=TIMEOUT_SECONDS,
                    encoding='utf-8',
                    errors='replace'
                )
                filtered_output = remove_prompt_lines(run_result.stdout)
                # If output is empty, try separate lines
                if not filtered_output.strip():
                    # Try splitting input (e.g., '3 5' -> '3\n5\n')
                    parts = test_input.split()
                    input_separate = '\n'.join(parts) + '\n'
                    run_result2 = subprocess.run(
                        exe_path,
                        input=input_separate,
                        capture_output=True,
                        text=True,
                        timeout=TIMEOUT_SECONDS,
                        encoding='utf-8',
                        errors='replace'
                    )
                    filtered_output2 = remove_prompt_lines(run_result2.stdout)
                    with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                        f.write(filtered_output2)
                        if run_result2.stderr:
                            f.write('\n---stderr---\n')
                            f.write(run_result2.stderr)
                    if filtered_output2.strip():
                        print(f"    Used separate line input for '{test_input}'.")
                        test_status.append('Success (separate input)')
                    elif run_result2.returncode != 0:
                        print(f"    Runtime error for input '{test_input}' (separate input). Stderr: {run_result2.stderr.strip()}")
                        test_status.append('Runtime error (separate input)')
                    else:
                        print(f"    No output for input '{test_input}' (separate input). Stderr: {run_result2.stderr.strip()}")
                        test_status.append('No output (separate input)')
                else:
                    with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                        f.write(filtered_output)
                        if run_result.stderr:
                            f.write('\n---stderr---\n')
                            f.write(run_result.stderr)
                    if run_result.returncode != 0:
                        print(f"    Runtime error for input '{test_input}'. Stderr: {run_result.stderr.strip()}")
                        test_status.append('Runtime error')
                    else:
                        test_status.append('Success')
            except subprocess.TimeoutExpired:
                with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                    f.write('Timeout: Program did not finish in time.')
                print(f"    Timeout for input '{test_input}'.")
                test_status.append('Timeout')
            except Exception as e:
                with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                    f.write(f'Exception: {e}')
                print(f"    Exception for input '{test_input}': {e}")
                test_status.append('Exception')
        status_rows.append({
            'Student Name': student_name,
            'Student ID': student_id,
            'Compile Status': 'Success',
            **{f'Test {i+1}': test_status[i] if i < len(test_status) else 'Not run' for i in range(len(TEST_CASES))},
            'Comment': ''
        })
        print(f"    Done.")
    # Write status CSV
    os.makedirs(os.path.dirname(STATUS_CSV), exist_ok=True)
    with open(STATUS_CSV, 'w', newline='', encoding='utf-8') as f:
        fieldnames = ['Student Name', 'Student ID', 'Compile Status'] + [f'Test {i+1}' for i in range(len(TEST_CASES))] + ['Comment']
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(status_rows)
    print(f"Status CSV written to {STATUS_CSV}")

if __name__ == '__main__':
    run_and_capture()
