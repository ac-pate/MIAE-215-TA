/*
MIAE 215 Assignment 1
Friday Oct. 3rd 2025
Anne-Sophie Couture 40314429
*/

#include <iostream> // Importing library
using namespace std;
int main(){ // Start of program

    int rows, columns, i, j;
    char letter; // Declaring variables

    rows = 27; // Prompts the user to enter a row and column amount. If the rows are greater than 26, smaller than 2, or the columns are smaller than 2, prompts the user again until conditions are met
    while (rows>26 or rows<2 or columns<2){
        cout<<"Enter a number of rows and columns. Rows must be smaller or equal to 26."<<endl;
        cin>>rows>>columns;
        cout<<"\n";
    }

    letter = 'a'; // Starting letter
    for (i=0; i<columns; i++){ // Outputs a row of 'column' width made with the 'a' character
        cout<<letter;
    }
    letter++; // Increments letter by 1
    cout<<"\n";

    for (i=0; i<(rows-2); i++){ // Outputs the hollow rows
        cout<<letter; // Outputs the first character of the hollow row
        for (j=0; j<(columns-2); j++){ // Outputs 'column'-2 amount of blank spaces
            cout<<" ";
        }
        cout<<letter<<endl;  // Outputs the last character of the hollow row
        letter++; // Increments letter by 1
    }

    for (i=0; i<columns; i++){ // Outputs a row of 'column' width made with the last character
        cout<<letter;
    }
    cout<<"\n";

    return 0; // End program
}