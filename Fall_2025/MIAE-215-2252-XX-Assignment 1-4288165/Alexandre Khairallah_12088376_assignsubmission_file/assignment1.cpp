#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        char ch = 'a' + i;

        if (i == 0 || i == rows - 1) {
            for (int j = 0; j < cols; j++)
                cout << ch;
        }
        else {
            cout << ch;
            for (int j = 1; j < cols - 1; j++)
                cout << ' '; 
            if (cols > 1)
                cout << ch;
        }

        cout << endl;
    }

    return 0;
}

