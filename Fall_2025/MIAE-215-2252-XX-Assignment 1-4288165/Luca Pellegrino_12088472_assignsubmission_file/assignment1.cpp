#include <iostream>

using namespace std;



int main() {

    int rows, cols;

  do {

    cout << "Enter the size of the box in terms of # of rows: ";

    cin >> rows;

    cout << "Enter the size of the box in terms of # of columns: ";

    cin >> cols;

    // Ensure valid box dimensions

    if (rows < 2 || cols < 2) {

        cout << "Error: number of rows and columns must each be at least 2." << endl;

    }

    if (rows > 26 || cols > 26) {

        cout << "Error: number of rows and columns must be less than 26" << endl;

    }

    } while (rows < 2 || cols < 2 || rows > 26 || cols > 26);



    // Draw the top row (all 'a')

    for (int j = 0; j < cols; ++j) {

        cout << 'a'; }

    cout << endl;



    // Draw the middle rows

    for (int i = 1; i < rows - 1; ++i) {

        char ch = 'a' + i;  // Next letter in the alphabet

        cout << ch;         // Left side




        for (int j = 1; j < cols - 1; ++j) {

            cout << ' ';    // Hollow middle

    }

        cout << ch << endl; // Right side

    }



    // Draw the bottom row

    char lastChar = 'a' + (rows - 1);

    for (int j = 0; j < cols; ++j)

        cout << lastChar;

    cout << endl;



    return 0;

}

