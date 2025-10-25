#include<iostream>
using namespace std;

int main()
{
    // Ask the user for the size of the bo
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";

    int rows, cols;
    cin >> rows >> cols;   // read number of rows, then number of columns
    // Draw the box one row at a time.

    for (int r = 0; r < rows; r++)
    {

        char letter = char('a' + r);

        if ( (r == 0) || (r == rows - 1) )
        {
            // Top or bottom row
            for (int c = 0; c < cols; c++)
            {
                cout << letter;
            }
            cout << endl;
        }
        else
        {
            // Middle rows
            cout << letter;                 // leading letter
            for (int c = 0; c < cols - 2; c++)
            {
                cout << ' ';               // spaces in the hollow interior
            }
            cout << letter << endl;        // trailing letter
        }
    }

    return 0;
}
