// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int rows, columns, r = 1;

    cout << "\nPlease enter the size of the box in terms of the number of rows ";
    cin >> rows;
	cout << "\nPlease enter the size of the box in terms of the number columns ";
    cin >> columns;
	
    char first_row = 'a'; //first row will always be a
    char last_row = 'a' + (rows - 1); // 1 less row since 0 is considered, thus if they ask for 6 we need to ask computer for 5

    //first row 
    for (int i = 0; i < columns; i++) //repeats the amount of times it repeats the letter a/first row (number of columns - 1)
    {
        cout << first_row;
    }

    cout << endl;

    //middle row
    if (rows > 2) {
        for (int row = 1; row < rows - 1; row++) { //repeats the amount of times a repeats (number of columns - 1)
            char middle_row = 'a' + row;

            cout << middle_row;

            for (int column = 0; column < columns - 2; column++) { //we wants column - 2 spaces for the inside of the rectangular box
                cout << ' ';
            }
            if (columns > 1)
                cout << middle_row << endl;
        }
    }


    //last row
    for (int i = 0; i < columns; i++)
    {
        cout << last_row;
    }

    cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
