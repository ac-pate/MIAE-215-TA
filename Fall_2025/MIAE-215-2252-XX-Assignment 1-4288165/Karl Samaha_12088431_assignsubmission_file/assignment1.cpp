#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt user for input
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    // Validate minimum size
    if (rows < 2 || cols < 2) {
        cout << "Error: number of rows and columns must each be at least 2." << endl;
        return 1;
    }

    // Draw the first row (all 'a')
    for (int j = 0; j < cols; j++) {
        cout << 'a';
    }
    cout << endl;

    // Draw the body rows
    for (int i = 1; i < rows - 1; i++) {
        char letter = 'a' + i;
        if (letter > 'z') {
            letter = 'a' + ((i - 26) % 26); // continue in ASCII sequence
        }
        cout << letter;
        for (int j = 1; j < cols - 1; j++) {
            cout << ' ';
        }
        cout << letter << endl;
    }

    // Draw the last row
    char last_letter = 'a' + (rows - 1);
    if (last_letter > 'z') {
        last_letter = 'a' + ((rows - 1 - 26) % 26);
    }
    for (int j = 0; j < cols; j++) {
        cout << last_letter;
    }
    cout << endl;

    return 0;
}
