import os
import csv
import re

# Paths
SUBMISSIONS_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', 'Fall_2025', 'MIAE-215-2252-XX-Assignment 1-4288165'))
RESULTS_CSV = os.path.join(os.path.dirname(__file__), 'results', 'assignment1_grades.csv')
RESULTS_FOLDER_NAME = 'results'

# Test cases and expected outputs
TEST_CASES = [
    ('test1.txt', ['aaaaa', 'b   b', 'ccccc']),
    ('test2.txt', ['aa', 'bb']),
    ('test3.txt', [
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
    ('test4.txt', [
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
    # Remove prompt lines and user input lines
    filtered = []
    for line in lines:
        lstripped = line.lstrip()
        # Ignore prompt and input lines
        if re.search(r'Please enter', lstripped):
            continue
        # Ignore lines that look like user input (e.g., numbers entered)
        if re.match(r'^[0-9]+\s+[0-9]+$', lstripped):
            continue
        if lstripped:
            filtered.append(lstripped)
    return filtered

# Main analysis function

def analyze_results():
    results = []
    student_folders = [f for f in os.listdir(SUBMISSIONS_DIR) if os.path.isdir(os.path.join(SUBMISSIONS_DIR, f))]
    print(f"Found {len(student_folders)} student submissions. Starting analysis...")
    for idx, student_folder in enumerate(student_folders, 1):
        folder_path = os.path.join(SUBMISSIONS_DIR, student_folder)
        match = re.match(r'(.+?)_(\d+)_assignsubmission_file', student_folder)
        if not match:
            continue
        student_name, student_id = match.groups()
        results_dir = os.path.join(folder_path, RESULTS_FOLDER_NAME)
        # Check for C++ file
        cpp_file = None
        for file in os.listdir(folder_path):
            if file.lower().endswith(('.cpp', '.c', '.cc', '.cxx', '.c++', '.cp')):
                cpp_file = file
                break
        if not cpp_file:
            results.append([student_name, student_id, '0', 'No C++ file found'])
            continue
        # Check compile result
        compile_path = os.path.join(results_dir, 'compile.txt')
        if not os.path.exists(compile_path):
            results.append([student_name, student_id, '1.5', 'No compile result file'])
            continue
        with open(compile_path, encoding='utf-8', errors='replace') as f:
            compile_log = f.read()
        if 'Compile error:' in compile_log:
            results.append([student_name, student_id, '1.5', 'Script error during compilation'])
            continue
        if 'error:' in compile_log or 'undefined reference' in compile_log or 'Compilation failed.' in compile_log:
            results.append([student_name, student_id, '1.5', 'Compilation error: see compile.txt'])
            continue
        # Check test results
        all_correct = True
        any_runtime_error = False
        any_timeout = False
        incorrect_cases = []
        for (result_file, expected) in TEST_CASES:
            result_path = os.path.join(results_dir, result_file)
            if not os.path.exists(result_path):
                incorrect_cases.append(f"Missing {result_file}")
                all_correct = False
                continue
            with open(result_path, encoding='utf-8', errors='replace') as f:
                output = f.read()
            if 'Timeout:' in output:
                any_timeout = True
                all_correct = False
                incorrect_cases.append(f"Timeout on {result_file}")
                continue
            if 'Exception:' in output:
                any_runtime_error = True
                all_correct = False
                incorrect_cases.append(f"Exception on {result_file}")
                continue
            output_lines = normalize_output(output)
            # Allow for minor whitespace differences in output
            expected_stripped = [line.strip() for line in expected]
            output_stripped = [line.strip() for line in output_lines]
            if output_stripped != expected_stripped:
                all_correct = False
                incorrect_cases.append(f"Incorrect output for {result_file}")
        # Grade and comment
        if any_runtime_error:
            comment = '; '.join(incorrect_cases) or 'Runtime error'
            grade = '1.5'
        elif any_timeout:
            comment = '; '.join(incorrect_cases) or 'Timeout error'
            grade = '1.5'
        elif not all_correct:
            comment = '; '.join(incorrect_cases) or 'Incorrect output'
            grade = '3.5'
        else:
            comment = 'Correct output'
            grade = '5'
        results.append([student_name, student_id, grade, comment])
    # Write results
    os.makedirs(os.path.dirname(RESULTS_CSV), exist_ok=True)
    with open(RESULTS_CSV, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(['Student Name', 'Student ID', 'Grade', 'Comment'])
        writer.writerows(results)
    print('Analysis complete. Results written to CSV.')

if __name__ == '__main__':
    analyze_results()
