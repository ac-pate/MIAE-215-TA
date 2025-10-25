#include <iostream>
//#include<stdnamespace>
using namespace std;
// number input
// MAKE SURE its atleast a 2x2 expt hnd
// loop to build 3 loop
// top loop
// middle loop
// bottom loop
// exeption handle for the z+
// sout  the box


int main() {

    // /*
    int rows;
    int cols;
    cout << "enter your rows ";
    cin >> rows;
    cout << "enter your cols ";
    cin >> cols;
    cout << endl;
    //cout <<  rows << endl; // your row" +
    //cout << "cols << endl;  // your colums" +
    // */

    /*
     char letter ;
     int  i= 229;
    // letter = 'a' + i;
     letter = 'b' + i;
     cout << letter; */

    /*
    for (int a= 0; a< rows ; a++) {
    // action
        cout<< "*" ;
    //    if (rows = a ) {
            for (int b = 0; b < cols ; b++) {
                cout<< "*" << endl;

            }
     //   }

    }*/

    for (int i = 0; i < rows; i++) {

        // code was breaking due to it not knowing what to do after z so barred it from passing z
        char letter = 'a' + (i % 26); ;
        //cout <<"*";
        // prints intial letter in each row
        cout << letter ;

//  if first or last row  print letter for each column
       // if (i == 0 ||  i == cols - 1) { lol this to me way to lomg to find and fix arggggg
        if (i == 0 ||  i == rows  - 1) {
            for (int j = 0; j < cols-1; j++) {
                cout << letter;
            }

        }

        // if not first or last  line
    else {
 // after first letter does total -2 blanks for 4mpty center bc of first letter and last letter
       // loops through till enough blanks printed then sout a letter
            for (int k =0; k < cols-2;  k++) {
                cout << ' ';
            }
            cout<< letter;
        }


// ends the line to repeats lol dont forget cuases problems
        cout << endl;
    }






    return 0;
}
// im done it think6
    // nvm its broken idk why arrrrrrr
