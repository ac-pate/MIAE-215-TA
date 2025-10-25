
#include <iostream>
using namespace std;

int main()
{
    int row, col, count = 0;
    char let = 'a';
    // user enters number if rows and columns
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    cout << endl;

    //loop prints first row with all A, the next row is hollow, begins and ends with the next ASCII letter
    //loop should end once the count = row

    
      

        // create loop for body of the box
      
         
            for (int i = 0; i < col; i++) // prints out first row 
            {
                cout << let;
            }
           
          
            //loop that cycles though letters, starts at the next let, and ends before last let
            // {
            //      for each letter, print out that letter with col-2 number of spaces
            //      once finished, increment outer loop to move to the next number
            //      break loop once done row-2 interations
            // }
            //        

            for (int j = 2; j < row; j++) // is at zero, will go to one 
            {
                cout << endl;
                ++let; //letter is now B
                for (int k = 0; k < col; k++)
                {
                    if (k == 0 || k == col-1)
                    {
                        cout << let;
                    }
                    else cout << " ";
                }
                
            }

            ++let;
            cout << endl; 

            for (int i = 0; i < col; i++) // prints out first row 
            {
                cout << let;
            }

            cout << endl;
  
    
}