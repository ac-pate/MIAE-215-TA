import os
import re
import pexpect
import csv

# Paths
SUBMISSIONS_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'Fall_2025', 'MIAE-215-2252-XX-Assignment 1-4288165'))
RESULTS_FOLDER_NAME = 'results'
STATUS_CSV = os.path.join(os.path.dirname(__file__), 'results', 'run_status.csv')

# Test cases: (row, col, result_file)
TEST_CASES = [
    (3, 5, 'test1.txt'),
    (2, 2, 'test2.txt'),
    (10, 20, 'test3.txt'),
    (26, 40, 'test4.txt'),
]

TIMEOUT_SECONDS = 15


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


def run_interactive(exe_path, row, col):
    child = pexpect.spawn(exe_path, encoding='utf-8', timeout=TIMEOUT_SECONDS)
    output = ''
    try:
        # Wait for first prompt
        child.expect(r'rows.*columns|Enter|enter|number of rows|size of the box', timeout=TIMEOUT_SECONDS)
        output += child.before + child.after
        child.sendline(str(row))
        # Wait for second prompt (if any)
        try:
            child.expect(r'columns|number of columns|Try again|next', timeout=5)
            output += child.before + child.after
            child.sendline(str(col))
        except pexpect.TIMEOUT:
            # If no second prompt, send col anyway
            child.sendline(str(col))
        # Read until EOF
        child.expect(pexpect.EOF, timeout=TIMEOUT_SECONDS)
        output += child.before
    except Exception as e:
        output += f'\n[pexpect error: {e}]\n'
    child.close()
    return output


def run_and_capture():
    student_folders = [f for f in os.listdir(SUBMISSIONS_DIR) if os.path.isdir(os.path.join(SUBMISSIONS_DIR, f))]
    print(f"Found {len(student_folders)} student submissions. Starting interactive run & capture...")
    status_rows = []
    for idx, student_folder in enumerate(student_folders, 1):
        folder_path = os.path.join(SUBMISSIONS_DIR, student_folder)
        match = re.match(r'(.+?)_(\d+)_assignsubmission_file', student_folder)
        if not match:
            print(f"[{idx}] Skipping folder: {student_folder} (invalid format)")
            continue
        student_name, student_id = match.groups()
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
        exe_path = os.path.join(folder_path, 'assignment1.out')
        results_dir = os.path.join(folder_path, RESULTS_FOLDER_NAME)
        os.makedirs(results_dir, exist_ok=True)
        # Compile
        compile_cmd = f"g++ '{cpp_path}' -o '{exe_path}'"
        compile_status = os.system(compile_cmd)
        if compile_status != 0:
            print(f"    Compilation failed.")
            status_rows.append({
                'Student Name': student_name,
                'Student ID': student_id,
                'Compile Status': 'Fail',
                **{f'Test {i+1}': 'Not run' for i in range(len(TEST_CASES))},
                'Comment': 'Compilation failed'
            })
            continue
        # Run test cases interactively
        test_status = []
        for i, (row, col, result_file) in enumerate(TEST_CASES):
            result_path = os.path.join(results_dir, result_file)
            try:
                output = run_interactive(exe_path, row, col)
                with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                    f.write(output)
                if '[pexpect error:' in output:
                    test_status.append('pexpect error')
                elif output.strip():
                    test_status.append('Success')
                else:
                    test_status.append('No output')
            except Exception as e:
                with open(result_path, 'w', encoding='utf-8', errors='replace') as f:
                    f.write(f'Exception: {e}')
                print(f"    Exception for test {i+1}: {e}")
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
