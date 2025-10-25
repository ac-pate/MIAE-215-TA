#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Please enter the size of the box in terms of # of rows and # of columns separated by a space: ";
    cin >> rows >> cols;

    if (rows < 2 || cols < 2) {
        cout << "Values for rows and columns must be at least 2" << endl;
        return 1;
    }
    for (int i = 0; i < rows; ++i) {
        char letter = 'a' + i; //i goes beyond ASCII z if i>25

        if (i == 0 || i == rows - 1) { // || is logically 'and' equivalent to &&
            
            for (int k = 0; k < cols; ++k)
                cout << letter;
        }
        else {
            
            cout << letter;
            for (int k = 0; k < cols - 2; ++k)
                cout << ' ';
            cout << letter;
        }
        cout << "\n";
    }
    return 0;
}