#include <iostream>
using namespace std;
int main () 
{
int leave;
int col, row, i, i2=1; 
char a='a';
do 
{
cout <<"\nPlease enter the size of the box in terms of number of rows and number of collombs: ";
cin >> row >> col;
cout << "\n";
if ( row <= 26 ) 
{
	for ( i=1; i<=row; i++ )
	{
	if (i==1 || i==row) 
		{
		while (i2 <= col)
			{
			cout << a;	
			i2++;
			}
		}		
	else 
		{
		cout << a; 
		while ( i2<= ( col - 2) ) 
			{
			cout <<" ";
			i2++;
			}
		cout << a; 
		}
	i2=1;
	a++;
	cout << "\n";
	}
}
else 
{
cout << " your dimensions are too big, please use a number of rows inferior to 27\n";

}
cout << "\nTo try different dimensions, input 1. Any other input will stop the program.\t";
cin>> leave;
a='a';

}while ( leave == 1 );
return 0;
}	
	
