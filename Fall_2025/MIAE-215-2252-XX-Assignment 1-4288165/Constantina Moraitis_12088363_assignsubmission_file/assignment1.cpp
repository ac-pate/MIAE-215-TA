//Constantina Moraitis 40325408
//October 10, 2025
//Assignment 1
//MIAE 215
//Tadeusz S. Obuchowicz
#include <iostream>
using namespace std;

int main() {
    char letter = 'a';  // initializing letter as a character variable type with initial value a
    int numrow, numcol;  // initializing integer variasbles titled numrow and numcol
    cout << "Enter the desired length ";
    cin >> numcol;
    cout << "Enter the desired height ";
    cin >> numrow;
  	 // giving values to the variables length and height (rectangle dimensions)
    for (int col = 1; col <= numcol; col++) {
        cout << letter;  // printing character letter 'a' for the first row
    }
   	 cout << endl;  // moving to the next line so the hollow parts can be made
    for (int row = 2; row < numrow; row++) {
        char currentletter = 'a' + (row - 1);  // determining the current letter for the row
        cout << currentletter;  // outputting the first letter
        for (int col = 2; col < numcol; col++) {
            cout << " ";  // giving the hollow part
        }
        if (numcol > 1) {
            cout << currentletter;  // printing the same letter at the end of the row
        }
        cout << endl;  // moving to the next line after printing the middle row
    }
    // getting the last row
    if (numrow > 1) {
        for (int col = 1; col <= numcol; col++) {
            cout << 'a';  // printing character letter 'a' for the last row
        }
        cout << endl;  // moving to the next line after printing the last row
    }

    return 0;
}

