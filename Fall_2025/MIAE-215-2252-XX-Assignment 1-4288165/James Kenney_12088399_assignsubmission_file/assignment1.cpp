#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the size of the box in terms of # of rows and # of columns: " << endl;
    cin >> rows >> cols;

    char ch = 'a';

    for (int i = 0; i < rows; i++) {
        int j = 0;
        while (j < cols) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                cout << ch;
            }
            else {
                cout << ' ';
            }
            j++;
        }
        cout << '\n';

        ch++;
        if (ch > 'z') {
            ch = 'a';
        }
    }

    return 0;
}
