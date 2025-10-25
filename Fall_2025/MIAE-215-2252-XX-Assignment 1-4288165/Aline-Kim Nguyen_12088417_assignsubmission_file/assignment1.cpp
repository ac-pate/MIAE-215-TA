/* Code by: Aline-Kim Nguyen
   Student ID: 40334356
   For the course: MIAE 215 offered by Concordia University
   Instructor: Tadeusz S. Obuchowicz

   Note: I tried to make the code look prettier with the stars, but it took much longer than I intended (I'm getting a little rusty
   with coding...), so I at least hope it was all somewhat worth it. And I hope it doesn't look harsh on the eyes.
*/

#include <iostream>
using namespace std;

int main() {
 cout << "*********************************************************" << endl;
 cout << "*  Welcome to the best program you will ever encounter  *" << endl;
 cout << "*********************************************************" << endl;
 cout << endl;
 int number_row;
 int number_col;
 char letter = 'a';

 cout << "Please enter your number of rows: ";
 cin >> number_row;

 //this is to catch the people who are trying to break my code :(
 while ((number_row < 2) || (number_row > 26)) {
  cout << "Please stop trying to break my code. You know how many letters there are in the alphabet...";
  cout << endl << "Try again: ";
  cin >> number_row;
 }

 cout << endl << "Please enter your number of columns: ";
 cin >> number_col;

 //this is also to catch the people who are trying to break my code :(
 while (number_col < 2) {
  cout << "I see what you did there... However, I am a firm believer that negative numbers are not numbers (2 or higher please).";
  cout << endl << "Try again: ";
  cin >> number_col;
 }

 cout << endl;

//This bit of code is to write the first line
 int i = 0;

 while (i < (number_col + 4)) {
  cout << "*";
  i++;
 }
 cout << endl;

 i = 0;
 cout << "* ";
 while (i < number_col) {
  cout <<  letter;
  i++;
 }
 cout << " *" << endl;

//This bit of code is for body
 i = 0;
 int j = 0;
 while (i < (number_row - 2)) {
  cout << "* " <<  ++letter;
  while (j < (number_col - 2)) {
   cout << " ";
   j++;
  }
  cout << letter << " *" << endl;
  i++;
  j = 0;
 }

//This lovely last bit is for the last line
 letter++;
 i = 0;
 cout << "* ";
 while (i < number_col) {
  cout << letter;
  i++;
 }
 cout << " *" << endl;

 i = 0;
 while (i < (number_col + 4)) {
  cout << "*";
 i++;
 }

 cout << endl << "Here you go! A rectangle of letters just for you!" << endl << "The end.";
 return 0;
}

