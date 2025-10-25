
#include <iostream>
using namespace std;

int main () {
        int rows, cols;

        cout <<"Please enter the size of the box in terms of # of rows and # of columns: ";
        cin >> rows >> cols;

        for (int i = 0; i < rows; i++) { //first for loop
                char letter = 'a' +i;

                if (letter > 'z')
                        letter = 'z';

                if (i==0 || i == rows -1) { //first and last rows are all letters
                        for (int j = 0; j < cols; j++) //second integrated for loop
                                cout << letter;
                } else {
                        //finishing product
                        cout <<letter;         //L side
                        for (int j = 0; j < cols - 2; j++) //third integrated for loop columns
                                cout << ' ';
                        if (cols > 1)
                                cout << letter;           //R side
                }
                cout << endl; //new line for the box
        }
} 