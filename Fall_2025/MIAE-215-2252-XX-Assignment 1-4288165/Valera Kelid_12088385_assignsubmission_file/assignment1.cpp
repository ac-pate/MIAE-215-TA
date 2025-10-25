#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input validation loop
    do {
        cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
        cin >> rows >> cols;

        if (rows < 2 || cols < 2) {
            cout << "Number of rows and columns must be at least 2. Please try again.\n";
        }
    } while (rows < 2 || cols < 2);


    // Limit the number of rows to 26
    if (rows > 26) {
        cout << "Number of rows limited to 26 (maximum allowed)." << endl;
        rows = 26;
    }

    // Print first row
    for (int c = 0; c < cols; c++) {
        cout << 'a';
    }
    cout << endl;

    // Print middle rows
    for (int r = 2; r <= rows - 1; r++) {
        char letter = 'a' + (r - 1);
        cout << letter;
        for (int s = 0; s < cols - 2; s++) {
            cout << ' ';
        }
        cout << letter << endl;
    }

    // Print last row
    char lastLetter = 'a' + (rows - 1);
    for (int c = 0; c < cols; c++) {
        cout << lastLetter;
    }
    cout << endl;

    return 0;
}
