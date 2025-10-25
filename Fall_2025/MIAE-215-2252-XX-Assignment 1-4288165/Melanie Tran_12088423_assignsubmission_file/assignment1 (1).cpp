#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the box: ";
    cin >> rows >> cols;

    if (rows < 2 || cols < 2) {
        cout << "Both rows and columns must be at least 2." << endl;
        return 1;
    }

    char letter = 'a';

    // first row
    for (int j = 0; j < cols; ++j) {
        cout << letter;
    }
    cout << endl;

    // body of the hollow rectangular box
    for (int i = 1; i < rows - 1; ++i) {
        letter++;
        cout << letter;
        for (int j = 1; j < cols - 1; ++j) {
            cout << ' ';
        }
        cout << letter << endl;
    }

    // last row
    if (rows > 1) {
        letter++;
        for (int j = 0; j < cols; ++j) {
            cout << letter;
        }
        cout << endl;
    }

    return 0;
}






