#include <iostream>
using namespace std;

int main() {
    int rows, cols; //  "cols" is columns 

    cout << "Please enter the size of the box in terms of # of rows and # of columns (in that order): ";
    cin >> rows >> cols;

    // Limits rows to 26 (letters a to z only) 
    if (rows > 26) {
        cout << "Number of rows limited to 26." << endl;
        rows = 26;
    }

    for (int i = 0; i < rows; i++) {
        char ch = 'a' + i;  // character changes only with row

        for (int j = 0; j < cols; j++) {
            // First or last row : fill entire row with ch
            if (i == 0 || i == rows - 1) {
                cout << ch;
            }
            // Middle rows : sides get ch, middle is space
            else {
                if (j == 0 || j == cols - 1) {
                    cout << ch;
                }
                else {
                    cout << ' ';    //causes blank in middle 
                }
            }
        }

        cout << endl;  // This is what will cause the change of lines when "ch" changes 
    }

    return 0;
}
