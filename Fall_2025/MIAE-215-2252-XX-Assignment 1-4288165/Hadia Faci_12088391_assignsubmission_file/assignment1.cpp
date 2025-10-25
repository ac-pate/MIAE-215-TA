#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask the user for input
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    // Check that inputs are valid (at least 2x2)
    if (rows < 2 || cols < 2) {
        cout << "Number of rows and columns must each be at least 2." << endl;
        return 1;
    }

    // Draw the rectangular box
    for (int i = 1; i <= rows; ++i) {
        // Determine the letter for this row
        char letter = 'a' + (i - 1);

        // If more than 26 rows, continue with ASCII characters after 'z'
        // You can comment out the next line if you prefer to wrap back to 'a'.
        // letter = 'a' + ((i - 1) % 26);

        // First or last row: print the letter across the whole row
        if (i == 1 || i == rows) {
            for (int j = 1; j <= cols; ++j)
                cout << letter;
        } 
        else {
            // Middle rows: letter + spaces + letter
            cout << letter;               // first column
            for (int j = 1; j <= cols - 2; ++j)
                cout << ' ';             // inner spaces
            cout << letter;               // last column
        }
        cout << endl; // move to the next row
    }

    return 0;
}
