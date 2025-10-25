#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++) {
        char letter = 'a' + i;  // Letter

        if (i == 0 || i == rows - 1) {
            // The 1st row, the last row
            for (int t = 0; t < columns; t++)
                cout << letter;
        }
        else {
            // The rest of the rows
            cout << letter;               // The left letter
            for (int t = 0; t < columns - 2; t++)
                cout << ' ';              // Spaces
            if (columns > 1)
                cout << letter;           // The right letter
        }
        cout << endl;
    }

    return 0;
}