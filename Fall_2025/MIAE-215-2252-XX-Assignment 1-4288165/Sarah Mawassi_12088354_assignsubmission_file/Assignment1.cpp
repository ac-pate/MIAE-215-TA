#include <iostream>

using namespace std;

int main()
{
int row, column, i, j;
char letter = 'a';

cout << "Please enter the size of the box in terms of number of rows" << endl;
cin >> row;

cout << "Please enter the size of the box in terms of number of columns" << endl;
cin >> column;

for(i=1; i<=row; i++)
{
for(j=1; j<=column; j++)
{
if(i==1)
{
cout << letter;
}
else
{
if(i!=row && j!=1 && j!=column)
{
cout<<" ";
}
}

if(j==1 || j==column)
{ if(i!=1 && i!=row)
{cout << letter;
}}
{if(i==row)
cout << letter;
}
}
letter++;
cout << endl;
}
return 0;
}
