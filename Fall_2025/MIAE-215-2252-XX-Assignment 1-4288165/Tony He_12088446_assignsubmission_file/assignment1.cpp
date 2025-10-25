#include <iostream>
using namespace std;

int rows;
int columns;
char letters = 'a';

int main()
{
	cout << "Enter the number of rows you want for the box" << endl;
	cin >> rows;
	cout << "Enter the number of columns you want for the box"<<endl;
	cin >> columns;
	cout << endl;
	for (int column = 1;column<=columns; column++)
	{
		cout << 'a';
	}
	cout<<endl;
	
	for (int row = 1; row<rows-1; row++)
	{
		letters++;
		cout << letters;
		  for (int column = 1; column < columns - 1; column++)
		  {
			cout << " ";
		  }
		cout << letters << endl;
		
		
	}
	letters++;
	for (int column = 1; column <= columns; column++)
	{
		cout << letters;
	}
	cout << endl;
		
      return 0;
}


