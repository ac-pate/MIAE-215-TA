#include <iostream>

using namespace std;

int main() {
	int row, col; //introducing the variables row and column
	char crc = 97; //ASCII value for 'a'

	cout << "Please enter the amount of rows." << endl; 
	cin >> row;
	while (row > 26) {
		cout << "There are only 26 letters in the roman alphabet, please stick to under 26 rows." << endl;
		cin >> row;
		if (row <= 26) cout << "Input accepted!" << endl;
	}				// This while loop is so that it doesn't cycle through all the ASCII characters and keeps a reasonable size for a box.
		
	
	cout << "Please enter the amount of columns." << endl;
	cin >> col;
	while (col > 120) {
		cout << "You are exceeding the screen space for columns and it will not produce a box. Please keep your columns under 120." << endl;
		cin >> col;
	}
	for (int i = 0; i < col; i++) { //First row characters 
		cout << crc;
	}
	cout << endl;
	for (int j = 0; j < row - 2; j++) { //Outer loop dictates 
		crc++;
		cout << crc; //First character of row middle section
		for (int s = 0; s < col - 2; s++) {
			cout << " "; //Prints space number of columns - 2 in between first and last.
		}
		cout << crc << endl; //Last character of row middle section
	}
	crc++;
	for (int i = 0; i < col; i++) { //Last row of characters
		cout << crc;
	}
	cout << endl;
	return 0;
}