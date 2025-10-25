#include <iostream>
using namespace std;

int main() {

	int rows;
	int columns;
	char letter = 'a';

	cout << "Please enter the size of the box" << endl;
	cout << "Rows: ";
	cin >> rows;
	cout << endl << "Columns: ";
	cin >> columns;

	for (int i = 0; i < rows; i++) {
		for (int x = 0; x < columns; x++) {

			if (i == 0 || i == rows - 1 || x == 0 || x == columns - 1) {
				cout << letter;
			}
			
			else {
				cout << " ";
			}
		}
		cout << endl;
		letter++;
		if (letter > 'z') {
			letter = '*';
		}
	}
	return 0;
}