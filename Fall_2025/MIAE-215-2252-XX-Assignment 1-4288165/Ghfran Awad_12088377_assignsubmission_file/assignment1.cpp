// assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   
	//Step 1 : Set limits for the number of rows and columns
	int r, c;
	cout << "Please Enter the Numbers of Rows and Columns:";
		cin >> r >> c;

	if (r < 2) cout << "Please enter a number bigger than 2" << endl;

	if (r > 26)
	{
		cout << "You used up all the Alphabet!Please choose a Number smaller or equal to 26!" << endl;
		exit(0);
	}
	   
	 
	if (c < 2) cout << "Please enter a number bigger than 2" << endl;



	//Step #2: Draw first row
	int i;
	for (i = 0; i < c; i++)
	{
		char firstrow;
		firstrow = 'a';
		cout << firstrow;
	}

		cout << endl;

	//Step #3: Draw middle rows
	int j;
	for (i = 1; i < r - 1; i++)
	{
		char secondrow;
		secondrow = 'a' + i;
		cout << secondrow;

			for (j = 1; j < c - 1; j++)
			{
				char hollow;
				hollow = ' ';
				cout << hollow;
			}
			cout << secondrow << endl;
		}

	//Step #4: Draw the last row
	for (i = 0; i < c; i++)
	{
		char lastrow;
		lastrow = 'a' + (r - 1);
		cout << lastrow;
	}

	cout << endl;


	return 0;




}