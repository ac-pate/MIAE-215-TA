#include <iostream>
using namespace std;
int main() {
	//define variables number of rows and numebr of columns
	int NumberOfRows;
	int NumberOfColumns;
	cout << "Please enter the number of rows :";
	cin >> NumberOfRows;
	cout << endl;
	cout << "Please enter the number of columns: ";
	cin >> NumberOfColumns;
	cout << endl;
	char c = 97; //ASCII character for a starts at 97
	
	for (int i = 1; i <= NumberOfRows; i++)
	{
		for (int j = 1; j <= NumberOfColumns; j++)
		{
			if ( ((i != 1) && (i != NumberOfRows)) && ((j!=1) && (j!=NumberOfColumns)) ) {
				//only enter here if the following conditions hold:
					// 1. We are not on first or last rows
						// -> not on first row AND not on last row
					// 2. We are not on the first or last columns
						// -> j not 1 and j not numberofcol
				cout << " ";

			}
			else {
				cout << c;
			}
			
		}
		cout << endl;
		c += 1;
	}


	return 0;
}