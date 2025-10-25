#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;


    for (int j = 0; j < cols; j++) {
        cout << 'a';
    }
    cout << endl;


    for (int i = 1; i < rows - 1; i++) {
        char letter = 'a' + i;
        cout << letter;
        for (int j = 0; j < cols - 2; j++) {
            cout << " ";
        }
        cout << letter << endl;
    }


    if (rows > 1) {
        char letter = 'a' + (rows - 1);
        for (int j = 0; j < cols; j++) {
            cout << letter;
        }
        cout << endl;
    }
   
    return 0;
}
