# Proof Logs for Students with Reduced Grades

This directory contains the actual test outputs from students whose grades remained at 3.5 or 1.5 due to logic errors in their Assignment 1 submissions.

## Test Configuration
- **Test 1**: 20 rows × 10 columns
- **Test 2**: 26 rows × 40 columns

## Students and Their Issues

### 1. Alif Mia (12088418) - Grade: 3.5
**File**: `Alif_Mia_12088418.log`

**Issue**: Wrong letter pattern in test 2
- The first row shows incorrect pattern: "aaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbb"
- Should be all 'a's across the first row
- Pattern breaks the expected rectangle letter box format

### 2. Aline-Kim Nguyen (12088417) - Grade: 3.5
**File**: `Aline-Kim_Nguyen_12088417.log`

**Issue**: Extra formatting/borders in output
- Adds decorative borders with asterisks (*) around the rectangle
- Includes welcome message and "The end" message
- Output has extra formatting not specified in requirements

### 3. Chloe Levert (12088449) - Grade: 3.5
**File**: `Chloe_Levert_12088449.log`

**Issue**: Limited to 26 columns max
- Test 2 shows error: "Oups! That's too many columns. Setting it to the maximum (26)"
- Should accept 40 columns as input but caps it at 26
- Does not meet the requirement to handle larger column values

### 4. Constantina Moraitis (12088363) - Grade: 3.5
**File**: `Constantina_Moraitis_12088363.log`

**Issue**: Last row always uses 'a' instead of correct letter
- Test 1: Last row should be 't' but shows 'a'
- Test 2: Last row should be 'z' but shows 'a'
- Logic error in calculating the letter for the bottom border

### 5. Dilraba Tursun (12088359) - Grade: 1.5
**File**: `Dilraba_Tursun_12088359.log`

**Issue**: Submitted wrong program (unit converter)
- Submitted a completely different program: a unit converter for meters/feet and kg/pounds
- Program expects menu choices (1-5) but receives row/column inputs (20, 10)
- When automated test inputs are provided, the program enters an infinite loop:
  - Reads "20" as menu choice → invalid option (valid are 1-5)
  - Loops back to menu → reads "10" → invalid option
  - Runs out of input but continues looping, printing menu infinitely
  - Terminated after 5-second timeout
- Did not submit the correct assignment (letter rectangle)

### 6. Ilas Slimani (12088402) - Grade: 3.5
**File**: `Ilas_Slimani_12088402.log`

**Issue**: First and last rows show letters horizontally
- First row: "abcdefghijklmnopqrst" (should be all 'a's)
- Last row: "abcdefghijklmnopqrst" (should be all 't's)
- Displays all letters in sequence instead of repeating the same letter

### 7. Liam Greene (12088374) - Grade: 3.5
**File**: `Liam_Greene_12088374.log`

**Issue**: Uses box-drawing characters instead of letters
- Uses pipe symbols (|) and em-dashes (—) instead of letters
- Does not use the alphabet as required
- Creates a graphical box but not with letters

### 8. Luca Lundgren (12088444) - Grade: 3.5
**File**: `Luca_Lundgren_12088444.log`

**Issue**: Wrong row count and invalid characters
- Test 2: Shows 27 rows instead of 26
- Uses invalid characters beyond the alphabet
- Last row character is '{' instead of proper letter

### 9. Mathis Nkombou-kamdoum (12088429) - Grade: 3.5
**File**: `Mathis_Nkombou-kamdoum_12088429.log`

**Issue**: Uses only 'a' and 'b' for all rows
- First row: 'a' (correct)
- All middle rows: 'b' (should increment through alphabet)
- Last row: 'a' (should be the nth letter based on row count)
- Does not properly increment letters for each row

### 10. Sofia Romero (12088419) - Grade: 3.5
**File**: `Sofia_Romero_12088419.log`

**Issue**: Last row uses 'a' instead of correct letter
- Similar to Constantina Moraitis
- Test output not yet captured (file may be missing from original test run)

### 11. Talia Kaloustian (12088375) - Grade: 3.5
**File**: `Talia_Kaloustian_12088375.log`

**Issue**: Outputs 21 rows instead of 20
- Test 1: Shows 21 rows (includes row with 'u', should stop at 't')
- Test 2: Shows 27 rows instead of 26 (goes beyond 'z' to '{')
- Off-by-one error in row counting logic

### 12. Tyler Hamel-Wong (12088368) - Grade: 1.5
**File**: `Tyler_Hamel-Wong_12088368.log`

**Issue**: Infinite loop - forgot to remove testing code
- Student wrapped entire program in `while(true)` loop for "testing and debugging"
- Comment in code: "This was not asked for but made testing and debugging 100x easier"
- After drawing the rectangle, program loops back to ask for input again
- With automated testing, runs out of input and enters infinite loop
- Timeout after 5 seconds on test 1
- Never reaches test 2
- The letter rectangle logic itself appears correct, but infinite wrapper makes it unusable

### 13. Vladislav Captari (12088362) - Grade: 3.5
**File**: `Vladislav_Captari_12088362.log`

**Issue**: Spaces between each letter
- First row: "a a a a a a a a a a" (should be "aaaaaaaaaa")
- Last row: "t t t t t t t t t t" (should be "tttttttttt")
- Extra spaces added between characters breaks the solid border requirement

---

## How to Use These Logs

Each log file contains:
1. Header for Test 1 (20 rows × 10 columns)
2. The actual program output for Test 1
3. Header for Test 2 (26 rows × 40 columns)
4. The actual program output for Test 2

These logs serve as proof of the logic errors that prevented students from receiving full marks (5/5).

## Generated On
Date: October 27, 2025

