#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;

    // Ask for number of rows
    cout << "Enter number of rows: ";
    cin >> rows;

    // Ask for number of columns
    cout << "Enter number of columns: ";
    cin >> columns;

    for (int i = 0; i < rows; ++i) {
        char ch = 'a' + i;

        // If going beyond 'z', continue with next ASCII characters
        ch = static_cast<char>('a' + i); // could wrap if needed

        if (i == 0 || i == rows - 1) {
            // First or last row: full line of characters
            for (int j = 0; j < columns; ++j) {
                cout << ch;
            }
        } else {
            // Middle rows: char, spaces, char
            cout << ch;
            for (int j = 0; j < columns - 2; ++j) {
                cout << ' ';
            }
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
