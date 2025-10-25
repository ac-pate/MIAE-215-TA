#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt user for input
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        char letter = 'a' + i; // Determine the letter for this row 

        if (i == 0 || i == rows - 1) {
            // full line of letters for first and last row
            for (int j = 0; j < cols; j++) {
                cout << letter;
            }
        }
        else {
            // Middle rows
            cout << letter; // Leading letter
            for (int j = 0; j < cols - 2; j++) {
                cout << ' ';
            }
            if (cols > 1) cout << letter; // Trailing letter (if width > 1)
        }

        cout << endl; // Move to next line
    }

    return 0;
}