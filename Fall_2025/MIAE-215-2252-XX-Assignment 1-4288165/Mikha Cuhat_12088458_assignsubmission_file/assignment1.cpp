#include <iostream>
using namespace std;

int main()
{
    int col, row, i, j, k; // Defining variables
    char a = 97;
    cout << "Please enter the size of the box in terms of # of rows and # of columns :";
    cin >> row >> col;

    if ((row < 27) && (col < 27)) // Code restricting the code to run only when inputed numbers are less than 27.
    {
        cout << "\n" << row << " Rows and " << col << " Columns:" << endl;

        for (i = 0; i < col; i++) //for loop to print first row of a
        {
            cout << a;
        }

        for (j = 0; j < row - 2; j++) // for loop to print body of the box
        {
            a++;
            cout << "\n" << a;

            for (k = 0; k < col - 2; k++) // prints out the spaces for the body of the box
            {
                cout << " ";
            }

            cout << a; // prints out last letter after spaces
        }

        cout << endl;
        a++;

        for (i = 0; i < col; i++) // for loop to print our last row of letters
        {
            cout << a;
        }
    }
    else
    {
        cout << "Please input numbers which are less than 27.";
    }
}
