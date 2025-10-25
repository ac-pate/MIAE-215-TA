
#include <iostream>

using namespace std;

int main()
{

    int  columnAmount;
    int rowAmount;



    cout << "Enter how many columns you desire (not more than 120 please):" << endl;                                // Prompt the user to enter the amount of 
                                                                                                                    // columns and rows they want.
    cin >> columnAmount;

    cout << "You desire " << columnAmount << " columns, nice." << endl;

/*

  cout <<     "                   \||/         " << endl;
  cout <<     "                   |  @___oo    " << endl;
  cout <<     "         /\  /\   / (__,,,,|    " << endl;
  cout <<     "        ) /^\) ^\/ _)           " << endl;
  cout <<     "        )   /^\/   _)           " << endl;
  cout <<     "        )   _ /  / _)           " << endl;
  cout <<     "    /\  )/\/ ||  | )_)          " << endl;
  cout <<     "   <  >      |(,,) )__)         " << endl;
  cout <<     "    ||      /    \)___)\        " << endl;
  cout <<     "    | \____(      )___) )___    " << endl;
  cout<<      "   \______(_______;;; __;;;     " << endl;

  */


    cout << '\n' << "Enter how many rows you desire (not more than 26 please):" << endl;

    cin >> rowAmount;

    cout << "You desire " << rowAmount << " rows, nice." << endl;




    char letter = 'a';                                                                                             // Introduce a first letter intialized at a.
                                                                                                                   // We initialize it at a so that we can 
                                                                                                                   // increment it later.


    if (rowAmount <= 26 && columnAmount <= 120)                                                                    // Set maximums to keep things from 
                                                                                                                   // breaking.


    {
        for (int i = 0; i < columnAmount; i++)                                                                     // First for loop. Builds first row.
            cout << letter;
        cout << endl;
        


        for (int j = 0; j < (rowAmount - 2); j++)                                                                  // Second for loop (w/nested). Builds all
        {                                                                                                          // of the middle. Note: we remove two from
            letter++;                                                                                              // rowAmount because the first and third
                                                                                                                   // for loop take care of the first and last
            cout << letter;                                                                                        // rows.
                

            for (int k = 0; k < (columnAmount - 2); k++)    
                cout << " ";


            cout << letter <<endl;
        }



        letter++;



        for (int l = 0; l < columnAmount; l++)                                                                    // Third for loop. Builds the last row.
            cout << letter;
    }



    else
        cout << "Let's keep things from breaking shall we? No more than 26 rows and no more than 120 columns." << endl;




    return 0;
}
