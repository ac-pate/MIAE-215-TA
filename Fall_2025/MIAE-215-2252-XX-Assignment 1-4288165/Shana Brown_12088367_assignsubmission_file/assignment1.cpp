#include <iostream>
using namespace std; 

int main() {

    int rows, cols;

    // declaring variables cin, cout 
   cout << "Please enter the size of the box in terms of # of rows and # of columns press enter between inputs: ";
        cin >> rows >> cols ; 
        cout << (" ") ;
        cout << endl;


// need to format the space before you can draw the box

    // printing 
    for ( int i = 0; i < rows; i++ ) {
        char ch = 'a' + i; // assigning the value "a" to the first line of the box

        if (ch > '~') ch = '~';

        // printing a solid line for first and last rows
        if (i == 0 || i == rows - 1) {
            for (int j = 0; j < cols; j++) {
                cout << ch;
            }
        } else {
        cout << ch; // left column
        for (int j = 0; j < cols - 2; j++) { 
            cout << ' '; // to print a space between the first and last columns (creating hollow rectangle)
        }

    if (cols > 1) cout << ch; // right column
    }

    cout << endl;
        }
    return 0;
    }