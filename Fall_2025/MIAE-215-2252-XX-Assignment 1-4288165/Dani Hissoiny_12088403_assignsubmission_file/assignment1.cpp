#include <iostream>
using namespace std;

int main()
{
	int rows, columns;
	cout <<"Enter # of rows and columns (ex. 7 5) ";
	cin >> rows >> columns;


	for (int x = 0; x < rows; x++)
	{
		char border = 'a' + x;
		if (border > 'z')
		{
			border = 'z';
		}
		if (x == 0 || x == rows - 1)                                            // 'rows - 1' because the first raw has value 0, so the last row would be 'rows' - 1
		{
			for (int y = 0; y < columns; y++)
				cout <<border;                                                  // top and bottom borders.
		}

		else {
			cout <<border;                                                      // first border (left one)
			for (int y = 1; y < columns - 1; y++)                               // 'columns - 1' for the same reason as above.
			{
				cout <<" ";                                                     // 'hollow part' made with spaces.
			}
			cout <<border;                                                      // second border (right one)
		}
		cout << endl;                                                           // new line so the box can be formed
	}
	return 0;
}





