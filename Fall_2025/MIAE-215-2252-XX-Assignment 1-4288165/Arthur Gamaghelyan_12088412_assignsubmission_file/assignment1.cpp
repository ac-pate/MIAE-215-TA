
#include <iostream>
using namespace std;

int main()
{
    int rows, columns; //defining the variables

    cout << "Hi! Please enter the size of the desired box in terms of # of rows and # of columns:"; // Asking for input

    cin >> rows >> columns; 

    for (int i = 1; i <= rows; i++) // start with i being 1, keep the loop while i is less or equal to rows, after each loop add 1 and check again
    {
      
        char letter = 'a' + (i - 1);
        //Now if the user entered more than 26 for rows, this will continue the ASCII sequence and do stuff like z { ... etc.
        //I'll let it continue naturally even if it goes beyond z.
        //Now to decide what kind of row this is
        if (i == 1 or i == rows) {
          
            /* top or bottom*/
            for (int j = 0; j < columns; j++) {
                cout << letter;
            }
        }
        else {
            /*middle*/
            cout << letter; //first letter 
            for (int j = 0; j < columns - 2; j++) {
                cout << ' '; //all the spaces in between
            }
            cout << letter; //last letter
        }

       
        cout << endl; //move to next line
    }
    
    return 0;
}