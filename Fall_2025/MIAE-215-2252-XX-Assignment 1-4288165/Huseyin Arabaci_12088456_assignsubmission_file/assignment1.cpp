#include <iostream>
using namespace std;
/* 
---------------------------------------------------------------------------------------------
   Assignment 1 - MIAE 215 - Fall 2025
   Author: Huseyin Burak Arabaci
   Student ID: 40330579
--------------------------------------------------------------------------------------------
*/
	int main() {
		int rows, cols;

	// Asking the user for input for the box dimensions

	cout << "Please enter the size of the box in terms of # of rows and # of columns:";
	cin >> rows >> cols;

	// Making sure input meets minimum 2x2 requirement, returning an error if not
	if (rows < 2 || cols < 2) {
		cout << "Both the number of rows and columns must be at least 2." << endl;
		return 1;
	}
	
	// Generating each row of the hollow square
	for (int i = 0; i < rows; i++) {
		// Characters loop back to 'a' after 'z' for inputs bigger than 26
		char ch = 'a' + (i % 26);
		
		if (i == 0 || i == rows - 1) {
			// First and last rows completely filled
			for (int j=0; j < cols; ++j)
				cout << ch;
		} else {
			// Generating the middle row
			cout << ch;
			for (int j = 0; j < cols - 2; ++j)
				cout << ' ';
			cout << ch;
		}


		cout << endl;

	}
	

	return 0;
}
