#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    cout << endl;

    for (int i = 0; i < rows; i++) {
        char letter = 'a' + i;


        if (letter > 'z') {
            letter = 'a' + (i % 26);  
        }

        if (i == 0 || i == rows - 1) {
            for (int j = 0; j < cols; j++) {
                cout << letter;
            }
        } 
        else {
            cout << letter;                 
            for (int j = 0; j < cols - 2; j++) {
                cout << " ";                
            }
            cout << letter;                 
        }

        cout << endl;
    }

    return 0;
}