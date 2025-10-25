import os
import csv
import subprocess
import re

# Paths
SUBMISSIONS_DIR = os.path.join(os.path.dirname(__file__), '..', 'Fall_2025', 'MIAE-215-2252-XX-Assignment 1-4288165')
SUBMISSIONS_DIR = os.path.abspath(SUBMISSIONS_DIR)
RESULTS_DIR = os.path.join(os.path.dirname(__file__), 'results')
RESULTS_CSV = os.path.join(RESULTS_DIR, 'assignment1_grades.csv')

# Test cases: (input, expected_output)
TEST_CASES = [
    ('3 5', ['aaaaa', 'b   b', 'ccccc']),
    ('2 2', ['aa', 'bb']),
    ('10 20', [
        'aaaaaaaaaaaaaaaaaaaa',
        'b                  b',
        'c                  c',
        'd                  d',
        'e                  e',
        'f                  f',
        'g                  g',
        'h                  h',
        'i                  i',
        'jjjjjjjjjjjjjjjjjjjj'
    ]),
    ('26 40', [
        'aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa',
        'b                                      b',
        'c                                      c',
        'd                                      d',
        'e                                      e',
        'f                                      f',
        'g                                      g',
        'h                                      h',
        'i                                      i',
        'j                                      j',
        'k                                      k',
        'l                                      l',
        'm                                      m',
        'n                                      n',
        'o                                      o',
        'p                                      p',
        'q                                      q',
        'r                                      r',
        's                                      s',
        't                                      t',
        'u                                      u',
        'v                                      v',
        'w                                      w',
        'x                                      x',
        'y                                      y',
        'zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz'
    ])
]

# Helper to normalize output

def normalize_output(output):
    lines = output.strip().splitlines()
    # Remove prompt lines and blank lines
    lines = [line.strip() for line in lines if line.strip() and not re.search(r'Please enter', line)]
    return lines

# Main grading function

def grade_submissions():
    results = []
    student_folders = [f for f in os.listdir(SUBMISSIONS_DIR) if os.path.isdir(os.path.join(SUBMISSIONS_DIR, f))]
    total_students = len(student_folders)
    print(f"Found {total_students} student submissions. Starting grading...")
    graded_count = 0
    for idx, student_folder in enumerate(student_folders, 1):
        folder_path = os.path.join(SUBMISSIONS_DIR, student_folder)
        # Extract student name and ID
        match = re.match(r'(.+?)_(\d+)_assignsubmission_file', student_folder)
        if not match:
            print(f"[{idx}/{total_students}] Skipping folder: {student_folder} (invalid format)")
            continue
        student_name, student_id = match.groups()
        print(f"[{idx}/{total_students}] Grading {student_name} ({student_id})...")
        # Find C++ file
        cpp_file = None
        for file in os.listdir(folder_path):
            if file.lower().endswith(('.cpp', '.c', '.cc', '.cxx', '.c++', '.cp')):
                cpp_file = file
                break
        if not cpp_file:
            print(f"    No C++ file found.")
            results.append([student_name, student_id, '0', 'No C++ file found'])
            graded_count += 1
            continue
        cpp_path = os.path.join(folder_path, cpp_file)
        exe_path = os.path.join(folder_path, 'assignment1.exe')
        # Compile
        try:
            compile_result = subprocess.run(['g++', cpp_path, '-o', exe_path], capture_output=True, text=True, timeout=20)
            if compile_result.returncode != 0:
                print(f"    Compilation failed.")
                results.append([student_name, student_id, '1.5', 'Does not compile'])
                graded_count += 1
                continue
        except Exception as e:
            print(f"    Compile error: {e}")
            results.append([student_name, student_id, '1.5', f'Compile error: {e}'])
            graded_count += 1
            continue
        # Run and check output
        all_correct = True
        any_run_error = False
        for test_input, expected in TEST_CASES:
            try:
                run_result = subprocess.run(
                    exe_path,
                    input=f'{test_input}\n',
                    capture_output=True,
                    text=True,
                    timeout=10
                )
                if run_result.returncode != 0:
                    print(f"    Runtime error for input '{test_input}'.")
                    any_run_error = True
                    break
                output_lines = normalize_output(run_result.stdout)
                if output_lines != expected:
                    print(f"    Output incorrect for input '{test_input}'.")
                    all_correct = False
            except Exception as e:
                print(f"    Exception during run: {e}")
                any_run_error = True
                break
        if any_run_error:
            results.append([student_name, student_id, '1.5', 'Runtime error'])
        elif all_correct:
            print(f"    Correct output.")
            results.append([student_name, student_id, '5', 'Correct output'])
        else:
            results.append([student_name, student_id, '3.5', 'Incorrect output'])
        graded_count += 1
        print(f"    Done. {graded_count}/{total_students} graded.")
    # Write results
    os.makedirs(RESULTS_DIR, exist_ok=True)
    with open(RESULTS_CSV, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(['Student Name', 'Student ID', 'Grade', 'Comment'])
        writer.writerows(results)
    # Print summary
    print('Grading complete. Results:')
    for row in results:
        print(row)

if __name__ == '__main__':
    grade_submissions()
