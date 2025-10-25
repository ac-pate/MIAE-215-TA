// assignment.cpp.cpp :
#include <iostream>
using namespace std;

/*
 * PROJECT REQUIREMENTS and NOTES:  
 * Hollow Rectangle Program
 * (honestly I spent too long trying to get the spacing right. REMEMBER : TAB!)
 *
 * This program asks user for number of rows and columns, then prints a hollow rectangle with letters a, b, c, d... etc.
 *
 * Stepwise Refinement (based on class notes and online research):
 * 1. Ask for input
 * 2. How to handle too many rows (?cap at 26 or restart alphabet)
 * 3. Draw top row
 * 4. Draw the middle (hollow) part
 * 5. Draw the bottom row
 *
 * note:Found "modulo trick" for wrapping around letters here (reference for later):
 * https://www.geeksforgeeks.org/dsa/program-to-print-alphabets-from-a-to-z-using-loop/
 * 
 * If I have enough time, add function so that if value is less than 2 and new values are requested, that the program restarts to allow new input
 */

int main() {
    int rows, columns;
// 1. input
    cout << "Enter number of rows, then press enter: "; //Rows and then columns as two seperate functions. Easier to navigate. VS Entering Row and Number
    cin >> rows;
    cout << "Enter number of columns, then press enter: ";
    cin >> columns;
// 2. check for irregular inputs (need review)
    if (rows < 2 || columns < 2) {
        cout << "pls enter something >= 2, rectangle size matters" << endl;
        return 0;
    }
// 3. decide how to handle more than 26 rows (past Z) 
    bool wrapAlphabet = true; // change to false if stop at z is wanted
    if (!wrapAlphabet && rows > 26) {
        cout << "Limiting rows to 26 because the alphabet ends at z" << endl;
        rows = 26;
    }
// 4. draw top row first
    char topLetter = 'a';
    for (int j = 0; j < columns; j++) {
        cout << topLetter;
    }
    cout << endl;
 // 5. draw the hollow body portion
    for (int i = 1; i < rows - 1; i++) {
        // if wrap mode is on, wrap alphabet around using "modulo trick"
        char letter = wrapAlphabet ? char('a' + (i % 26)) : char('a' + i);

        cout << letter; // left side

        for (int j = 0; j < columns - 2; j++) {
            cout << " "; // middle spacing
        }

        cout << letter; // right edge
        cout << endl;
    }
// 6. draw bottom row last
    char bottomLetter = wrapAlphabet ? char('a' + ((rows - 1) % 26)) : char('a' + (rows - 1)); // "modulo trick"
    for (int j = 0; j < columns; j++) {
        cout << bottomLetter;
    }
    cout << endl;

    return 0;
}
