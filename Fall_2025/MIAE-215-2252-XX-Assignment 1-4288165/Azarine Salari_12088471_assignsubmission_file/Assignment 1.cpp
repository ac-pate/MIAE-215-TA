#include <iostream>


using namespace std;

int main() {
    int rows, cols;

    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    if (rows > 26) {
        cout << "The maximum allowed rows are 26. Setting rows to 26." << endl;
        rows = 26;
    }

    if (rows < 2 || cols < 2) {
        cout << "Error: Both rows and columns must be at least 2." << endl;
        return 1;
    }

    char letter = 'a';
    for (int i = 0; i < cols; i++) {
        cout << letter;
    }
    cout << endl;

    for (int i = 1; i < rows - 1; i++) {
        letter = 'a' + i;  
        
        cout << letter; 
        for (int j = 1; j < cols - 1; j++) {
            cout << " ";  
        }
        cout << letter << endl;  
    }

    
    if (rows > 1) {
        letter = 'a' + (rows - 1);
        for (int i = 0; i < cols; i++) {
            cout << letter;
        }
        cout << endl;
    }

    return 0;
}
