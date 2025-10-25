#include <iostream>

using namespace std;

int main ()
{
int row, column, x, y;
char character = 'a';

cout <<"Enter number of rows" << endl;
cin >> row;

if(row > 26)
{
return 0;
}

cout <<"Enter number of column" << endl;
cin >> column;

for(x=1; x<=row; x++)
{
	for(y=1; y<=column; y++)
	{
		if(x==1)
		{
		cout << character;
		}
		else
		{
		if(x!=row)
		{
		if(y!=1)
		{		
		if(y!=column)
		{
		cout<<" ";
		}
		}}}

		if(y==1 || y==column)
		{
		if(x!=1)
 		{
		if(x!=row)
		{
		cout << character;
		}
		}}
		{
		if(x==row)
		cout << character;
		}
	}
	character++;
	cout << endl;
}
return 0;
}
