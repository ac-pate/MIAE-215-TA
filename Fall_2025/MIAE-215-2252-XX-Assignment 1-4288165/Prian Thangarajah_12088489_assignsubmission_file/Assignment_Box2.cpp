#include <iostream>
using namespace std;

int main() {
    int rows;
    int cols;

    do {
        cout << "Please enter a number of rows: ";
        cin >> rows; // User inputs the  number of rows from their keyboard
        if (rows <=0)
            cout << "Please enter a value greater than 0. " << endl;
    } while (rows <=0);   // Prevents user from inputting a negative number

    do {
        cout << "Please enter a number of column: ";
        cin >> cols; // User inputs the number of columns from their keyboard
        if (cols <= 0)
            cout << "Please enter a value greater than 0. " << endl;
    } while (cols <=0); // Loop until user finally inputs a positive number

    for (int i = 0 ; i < rows; i++) {  // Setting up the for loop
        char letter = 'a' + i;         // +i for the next ASCII character to be printed in the column below it

        if (i != 0 && i != rows - 1) { // Using logical operator && to make sure the middle rows do not get filled in
            cout << letter; // Prints out an ASCII character on the "Left" side of the box
            for (int j = 0 ; j < cols - 2; j++) // No spaces in first and last columns so (col-2) number of spaces total
                cout << ' '; // Spaces inside the box to make it hollow
            if (cols > 1)    // Ensures box is close of the "right" side
                cout << letter;  // Prints out an ASCII character on "right" side of the box
        }
        else{
            for (int k = 0; k < cols; k++)
                cout << letter;      // First and last row gets filled
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}