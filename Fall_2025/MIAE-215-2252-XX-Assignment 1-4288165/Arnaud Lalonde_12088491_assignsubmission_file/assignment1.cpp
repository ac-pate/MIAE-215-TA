//Assignment 1
//Arnaud lalonde 40315610 
//to be submitted to Tadeusz S. Obuchowicz on October 10th 2025



//task: Write a complete C++ program which prompts the user to enter the number of rows and the number of columns specifying the size of a rectangular box.
//The program then draws on the screen, using ASCII characters, a ‘hollow’ rectangular box. The first row is to consist of the required number of ‘a’ characters,
//the second row consists of a leading ‘b’, followed by blanks, followed by the trailing ‘b’, the third row consists of a leading ‘c’, followed by blanks, followed by the trailing ‘c’, etc.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Please enter the size of the box in terms of # of rows and # of columns with a space between them.(Example: for a 5 by 5 box, enter: 5 5): ";
    cin >> rows >> cols;

   
   
    if (rows < 2 || cols < 2) {
        cout << "Number of rows and columns must be at least 2." << endl;
        return 1;
    }

    
    
    for (int i = 0; i < rows; i++) {
        char ch = 'a' + i; 

        
        if (ch > '~') ch = '~';

        
        if (i == 0 || i == rows - 1) {
            for (int j = 0; j < cols; j++) {
                cout << ch;
            }
        } else {
            
            cout << ch; // left border
            for (int j = 0; j < cols - 2; j++) {
                cout << ' ';
            }
           
            cout << ch; 
        }
        cout << endl;
    }

    return 0;
}
