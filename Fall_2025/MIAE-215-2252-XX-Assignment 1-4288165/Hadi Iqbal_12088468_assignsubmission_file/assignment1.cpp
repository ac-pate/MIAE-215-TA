#include <iostream>
using namespace std;

int main() {

    int rows, columns;
    char letter;

    cout << "Enter number of rows and columns please:";
    cin >> rows >> columns;

    //Criteria check (rows&columns must be >= 2)
    if (rows < 2 || columns < 2) {
       cout << "Error: rows and columns must be at least 2." << endl;

       return 1;
    }


    //forloop
    for (int row = 0; row < rows; row++) {
        char letter = 'a' + (row % 26);   //assigns one letter per row

        for (int col = 0; col < columns; col++) {  //inner loop

            if (row == 0 ||
                row == rows - 1 ||
                col == 0 ||
                col == columns -1) {

              cout << letter;  //this prints the border
            }
            else {
                  cout << " ";    //empty space if not printing border
                  }
         }

     cout << endl;
    }

return 0;

}
 
