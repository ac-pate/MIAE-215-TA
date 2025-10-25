#include <iostream>
using namespace std;



int main()
{
    int numRows;
    int numColumns;

    int numAscii = 97; // char(97) = 'a'

    do {
        cout << "Enter the number of rows then the number of columns you want to shape the box" << endl;
        cin >> numRows >> numColumns;

        // Message to the user if the values are out of range
        if (numRows < 2 || numRows > 26 || numColumns < 2 || numColumns > 26) {
            cout << "Both numbers must be between 2 and 26. Try again !" << endl;
        }
    } while (numRows < 2 || numRows > 26 || numColumns < 2 || numColumns > 26);



    //Top row --> all 'a'
    for (int i = 0; i < numColumns; i++) {
        cout << char(numAscii);
    }

    //Middle part of the box with first and last character being the same
    for (int i = 1; i < numRows - 1; i++) {
        cout << endl << char(numAscii + i); //First character of the row displays

        //Hollow space if numColumns > 2
        for (int j = 1; j < numColumns - 1; j++) {
            cout << ' ';
        }
        cout << char(numAscii + i); //Last character of the row (same as the first of the row)
    }

    cout << endl;

    //Bottom row 
    for (int i = 0; i < numColumns; i++) {
        cout << char(numAscii + numRows - 1);
    }
    cout << endl;

    return 0;

}