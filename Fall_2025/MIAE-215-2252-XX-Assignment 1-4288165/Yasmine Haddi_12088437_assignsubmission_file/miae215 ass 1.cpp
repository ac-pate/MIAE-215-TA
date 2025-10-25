#include <string>
#include <iostream>

// Author: Yasmine Haddi
// Oct. 10, 2025
// writing a program that draws a hollow rectangular box using ASCII characters


using namespace std;

int main() {
    //declaring two variables for the user's input
    int rows, columns;

    //prompt for the user to enter the box's dimensions
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> columns; // putting the inputs into the variables

    cout << "You entered " << rows << " rows and " << columns << " columns." << endl; //TO DO : remove before senDING TO TEACHER!!!

    char letter = 'a';  //starting letter 

    //Loop to form the first row with the starting letter
    for (int i = 0; i < columns; i++) {
        cout << letter; 
    }
   
    cout << endl;
    
    //Middle rows with the hollow spaces 
    for (int i = 1; i < rows - 1; i++) {
        letter++;  //moving on to the next letter
        cout << letter; //showing the first column of the middle rows
        for (int j = 1; j < columns - 1; j++) { 
            cout << " "; //output of the hollow spaces
        }
        
        cout << letter << endl;  //ouput of the last letter of the middle rows
    }

    //Moving to the last letter
    letter++;  
    //loop to make a full line of the last letter
    for (int i = 0; i < columns; i++) {
        cout << letter;
    }
    

    cout << endl;

    return 0; 
}
