#include <iostream>
using namespace std;
int main()
{
	//Ask user to input values for rows and columns.
	int rows, columns;
	int r, c;
	cout << " Please enter the size of the box in terms of # of rows and # of columns:";
	cin >> rows >> columns;

	// Limit the user's input to rows>=2 and columns>=2.

	if (rows < 2 || columns < 2) {
		cout << "Please enter a number of rows and columns bigger or equal to two." << endl;
	} else {


		//First row must print all a's.
		for (c = 1; c <= columns; c++)
		{
			char letter;
			letter = 'a';
			cout << letter;
		}
		cout << endl;



		// Middle row must print a leading letter, space, then a trailing letter.
		//With every row we use a char increment to move to the next letter of the alphabet or to the next number.
		//I decided to not limit myself with the alphabet, therefore I included numbers as well, to do so use if statement.

			for (int r = 1; r < rows - 1; r++) {
				char printed_character;
				if (r < 26)
					printed_character = 'a' + r;

				//if the input is bigger than 26, meaning we have used up all the alphabet.

				else
					printed_character = '0' + ((r - 26) % 10);
				cout << printed_character;

				//will create space between leading and trailing letters.

				for (int c = 1; c < columns - 1; c++) {
					cout << " ";
				}
				cout << printed_character << endl;
			}



			//Bottom line
			// Reuse the same if statement used in the middle section to make sure we are not limited to the use of the alphabet.


				char last_row;
			if (rows - 1 < 26)
				last_row = 'a' + (rows - 1);
			else
				last_row = '0' + ((rows - 1 - 26) % 10);
			for (c = 1; c <= columns; c++)
			{
				cout << last_row;
			}
			cout << endl;
	}


	return 0;
}