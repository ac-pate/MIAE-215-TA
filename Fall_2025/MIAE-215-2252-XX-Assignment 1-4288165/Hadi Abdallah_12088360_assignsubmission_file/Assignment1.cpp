#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Prompt user for input
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << endl;

    // Validate input
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid dimensions!" << endl;
        return 0;
    }

    // Draw the hollow box
    for (int i = 0; i < rows; i++) {
        char ch = 'a' + i; // Letter for this row

        if (i == 0) {
            // First row: all 'a'
            for (int j = 0; j < cols; j++)
                cout << ch;
        }
        else if (i == rows - 1) {
            // Last row: all same letter
            for (int j = 0; j < cols; j++)
                cout << ch;
        }
        else {
            // Middle rows: letter + spaces + letter
            cout << ch;  // left border
            for (int j = 0; j < cols - 2; j++)
                cout << " ";
            if (cols > 1)
                cout << ch;  // right border
        }
        cout << endl;
    }

    return 0;
}
