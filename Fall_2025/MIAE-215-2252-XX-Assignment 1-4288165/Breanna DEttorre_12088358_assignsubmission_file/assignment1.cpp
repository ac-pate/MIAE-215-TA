// Author: Breanna D'Ettorre
// Oct. 10, 2025
// assignment1.cpp 

#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Initialize and prompt row and column variables
    int row = 0;
    int col = 0;

    // Prompt user for rows and coloumns
    cout << "Please enter the size of the box in terms of # of rows and # of columns : ";
    cin >> row >> col;

    // To ensure the entered values are positive and that certain characters (like null) wont interupt the box image
    while ((row < 1) || (col < 1) || (row > 26))
    {
        cout << "Please enter positive values for the # of rows and # of columns and a # of rows below 27 : ";
        cin >> row >> col;
    }

    // Initialize thecharacter variable
    char letter = 'a';

    // Nested loops/ifs system:
    for (int count_row = 1; count_row <= row; count_row++)
    {
        // Printing first and last rows
        if ((count_row == 1) || (count_row == row))
        {
            for (int count_col = 1; count_col <= col; count_col++)
            {
                cout << letter;
            }

        }

        // "Hollow" rows
        else
        {
            for (int count_col = 1; count_col <= col; count_col++)
            {
                // print borders
                if ((count_col == 1) || (count_col == col))
                {
                    cout << letter;
                }
                // print empty space
                else
                    cout << ' ';
            }
        }

        cout << endl;
        letter++;
    }

    return 0;
}

