

#include <iostream>
using namespace std;

int main()
{
	int rows;
	int columns;

	cout << "enter # of rows of the box";
	cin >> rows;
	cout << "enter # of columns of the box";
	cin >> columns;


	//first row  
	if (rows <= 26) {

		for (int i = 0; i < columns; i++) {  
			cout << 'a';
		}

		cout << endl;


		//middle row

		//row letters
		for (int r = 1; r < rows - 1; r++) {
			char Letter = 'a' + r;

			cout << Letter;


			// row spacing, (we need columnes-2 spaces)
			for (int c = 0; c < columns - 2; c++) {
				cout << ' ';
			}

			//column letters 
			if (columns > 1) {
				cout << Letter;

			}
			cout << endl;
		}

        //last row
		char LastLetter = 'a' + (rows - 1);
		for (int l = 0; l < columns; l++) {
			cout << LastLetter;

		}



		cout << endl;

		return 0;

	}
	else {
		cout << " Try again, no letters above z!";
	}

}