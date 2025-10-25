// Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Abderrahmen Laadhar 40343880

#include <iostream>
using namespace std;

int main()
{
	int rows, columns;
	int i, t;
	char letter;
	cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
	cin >> rows >> columns;

	if (rows <= 0 || columns <= 0) {
		cout << "Invalid input. PLease enter positive integers.";
		return 1;
	}

	for (i = 0;i < rows;i++) {
		letter = 'a' + i;

		if (i >= 26) {
			letter = 'a' + (i % 26);
		}

		if (i == 0 || i == rows - 1) {
			for (t = 0; t < columns; t++) {
				cout << letter;
			}
			cout << endl;
		}
		else {
			cout << letter;
			for (t = 1;t < columns - 1;t++) {
				cout << " ";
			}
			if (columns > 1) {
				cout << letter;
			}
			cout << endl;
		}
	}
	return 0;
}