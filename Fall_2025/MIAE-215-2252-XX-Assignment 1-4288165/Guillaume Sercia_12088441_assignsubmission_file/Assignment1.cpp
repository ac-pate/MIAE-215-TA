#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    if (rows < 2 || columns < 2) {
        cout << "Rows and columns must be at least 2." << endl;
        return 0;
    }

    if (rows > 26) {
        cout << "Rows cannot exceed 26 (letters 'a' to 'z')." << endl;
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        char letter = 'a' + i; 

        if (i == 0 || i == rows - 1) {
        for (int j = 0; j < columns; j++) {
        cout << letter;
            }
        }
        else {
        cout << letter; 
        for (int j = 0; j < columns - 2; j++) {
        cout << ' ';             }
        cout << letter;         }

        cout << endl; 
    }

    return 0;
}