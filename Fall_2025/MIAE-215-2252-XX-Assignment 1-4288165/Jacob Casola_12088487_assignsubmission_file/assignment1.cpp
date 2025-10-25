//Jacob Casola Assignment 1 Due Oct 10
#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    char A = 'A';
    int col;
    int row;
    cout<<"How many columns would you like in the box?"<<endl;
    cin>>x;
    cout<<"How many rows would you like in the box?"<<endl;
    cin>>y;
    if(y<=26)
            for (row = 1; row <= y; row++) {           // Keeps track of the # of rows
                    for (col = 1; col <= x; col++) // Keeps track of # of columns
                    {
                        if (row == 1 or row == y or col == 1 or col == x)//only do the action at the borders of the box,
                        {
                            cout << A;//prints A
                        }
                        else {
                            cout << " ";// If not at a border, leave a space.
                        }
                    }
                    cout << endl;  // Row is finished, next line
                    A++;           // change letter for the next row
                }
    else
    {
        cout<<"The alphabet only has 26 letters. Please select a number of rows less than 26."<<endl;
    }
    return 0;
            }
// This program counts the columns first, moving along the rows. If on the extremities of the square, it will primt out the letter asssociated to the row. If not, it will leave a blank space until the extremity. If column < 26, it will continue on with the ASCII characters until there are no more.
        
