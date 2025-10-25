
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int row;
	int column;
	
	cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
	cin >> row >> column;

	if (row < 2 || column < 2) {
		cout << "Number of rows and columns can't be less than 2." << endl;
		row = 26;
		return 1;
	}

	if (row > 26) {
		cout << "There can be no more than 26 rows (letters a to z)." << endl;
		row = 26;
	}

	for (int i = 0; i < row; i++) {
		char letter = 'a' + i;

		if (i == 0 || i == row - 1) {
			for (int j = 0; j < column; j++)
				cout << letter;
		}
		else {
			cout << letter;
			for (int j = 0; j < column - 2; j++)
				cout << " ";
			cout << letter;
		}
		cout << endl;
	}

	return 0;
}