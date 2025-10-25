// 10 October 2025
// Asser Alayed
// 40302504
// Professor Tadeusz S. Obuchowicz
// MIAE215 Assignment 1

#include <iostream>
using namespace std;

int main() {
	int rows, columns;
	char letter = 'a';

	cout << "Please enter the number of rows and columns you'd like: ";
	cin >> rows >> columns;

	cout << endl;

	// for the first row
	for (int i=1; i <= columns; i++) {
	cout << letter;
	}
	cout << endl;

	// for sides
	letter++; // change letters
	for (int r=2; r <= rows - 1; r++) {
	for (int c=1; c <= columns; c++) {
		if (c == 1 || c == columns) {
		cout << letter;
		} else {
			cout << " "; // hollow
		}
	}
	cout << endl;

	// make it repeat letters so it can go greater than 26
	letter++;
	if (letter > 'z') {
	letter = 'a';
	}
	}

	// last row
	if (rows > 1) { // if there is only one row, first = last
		for (int i=1; i <= columns; i++) {
		cout << letter;
	}
	cout << endl;
	}
return 0;
}
