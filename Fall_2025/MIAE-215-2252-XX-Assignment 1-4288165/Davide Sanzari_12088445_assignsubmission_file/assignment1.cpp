#include <iostream>
using namespace std;

int main() {
	int rows, columns;

	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;

	if (rows > 26) {
		cout << "The number of rows exceeds the alphabet limit of 26." << endl;
		rows = 26;
	}

	cout << endl;

	for (int i = 0; i < rows; i++) {
		char cha = 'a' + i;

		if (i == 0 || i == rows - 1) {

			for (int k = 0; k < columns; k++)
				cout << cha;
		}

		else {
			cout << cha;
			for (int j = 0; j < columns - 2; j++)
				cout << ' ';
			cout << cha;
		}
		cout << endl;
	}

	return 0;
}