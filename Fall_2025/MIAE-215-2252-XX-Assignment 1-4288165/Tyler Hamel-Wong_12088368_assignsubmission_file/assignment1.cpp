//Student ID: 40345062
//Student Name: Tyler Hamel-Wong
//I don't remember if you said to write comments on the or not so I wrote them anyways just to be safe 
//and explain my logic/thought process as to what I did.

#include <iostream>

using namespace std;

int main(){

    int rows, columns = 0; //I know that I want to store 2 whole numbers to be used as rows and columns.

    while (true){ //This was not asked for but made testing and debugging 100x easier.

        char currentLetter = 97; //The first letter in ASCII table is 97, and the last z = 122 is used later.

        cout << "Please enter the size of the box in terms of # rows and # of columns: ", cin >> rows, cin >> columns;
        //This gets the user to input # rows followed by # columns, the ' ' (space) counts as the end of an input
        //Knowing this I just stacked the two inputs into one line.

        for (int i = 1; i <= rows; i++){ //Loops a number of times equal to the number of rows inputted to create that many rows.

            if (currentLetter >= 123){ //This is my loop mechanism so that once currentLetter is 123 it gets reset back to a, making any input greater than 26 work fine.
                currentLetter = 97; //Also has to be somewhere at the top or right after increasing currentLetter to prevent typos and checking too late.
            }

            //Knowing that the first and last row print the same way in the sense of no spaces I check if the interating variable i is ever equal to the start or end number.
            if (i == 1 || i == rows){
                for (int v = 1; v <= columns; v++){ //This loop just prints it v times equal to the # given in the column input.
                    cout << currentLetter;
                }

                cout << endl;
            }
            else{ //If the row is not a starting or end row I want the code to print something else hence the use of if/else statements.
                for (int v = 1; v <= columns; v++){ //Creates # columns specified in the beginning.
                    if (v == 1 || v == columns){ //Once again I want to check if its a starting position or an end position since those are the only places which get a letter.
                        cout << currentLetter;
                    }
                    else{ // Otherwise we just want spaces to fill the gap in between until v eventually reaches the last column #.
                        cout << " ";
                    }
                }

                cout << endl;
            }

            currentLetter++; //Increases the ASCII value by 1 to go to the next letter.
        }

        cout << endl;

    }

    return 0;
}