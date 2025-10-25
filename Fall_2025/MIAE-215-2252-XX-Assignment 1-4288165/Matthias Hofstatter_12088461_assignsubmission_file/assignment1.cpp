#include <iostream>
#include <string>
using namespace std;


int main() {

char albet[26];

for (int ch = 'a'; ch <= 'z'; ch++) {
    //do ch-'a' because we start at index 0
    albet[ch-'a'] = ch;
//found this on stackoverflow it indexs all the letters of the alphabet for 0-25 allowing them to be called by char[SomeNumber]
}

// variables needed for counting and taking user inputs
//used unsigned int because I have no use for negative numbers
//used short int because I did not need 4 bytes to represent numbers to 26, 2 bytes is ample.
unsigned short int row;
unsigned short int count1 = 0;
unsigned short int col;
unsigned short int count2 = 0;

// I think it's easier to use if you ask for rows and columns seperatly so that the user have less chances to cause unintended results
cout << "give me a number (less than 27) of rows for your box." << endl;
cin >> row;
cout << "give me a number of columns for your box." << endl;
cin >> col;

if (row <= 26) {

//prints top row.
while(count1 < col){
cout << albet[0];
count1 = count1 + 1;
}
//sets up our box's body so that it's not on the same row as our lid.
cout << endl;

//allows for the void to not be two characters too wide
col = col - 2;
//resets counter1 for use in the body
count1 = 1;
// Did this for the body but it ends up helping further down aswell
row = row - 1;

//Box body loops.
while(count1 < row) {
cout << albet[count1];
count2 = 0;

//Void loop
while(count2 < col) {
cout << " ";
count2 = count2 + 1;
}
// This closes up our box on the right side
cout << albet[count1] << endl;
count1 = count1 + 1;
}
// Resets counter1 for use in the final row
count1 = 0;
//prints bottom row.   
while(count1 < col + 2){
// I can do as follows because I already subtracted 1 from row above
cout << albet[row];  
count1 = count1 + 1;
}
// seperates the box from the computer command line that comes after completion of the program
cout << endl;
}
else {
//Idiot proofing.
cout << "error: Program rules not respected.";
}



return 0;



}
	
