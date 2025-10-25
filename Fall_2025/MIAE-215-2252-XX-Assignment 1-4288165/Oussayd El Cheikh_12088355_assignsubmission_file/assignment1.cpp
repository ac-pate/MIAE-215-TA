#include <iostream>
using namespace std;
int main()
{
int rows, columns, hollow;
char edge= 'B' ;
cout << "How many columns do you want? ";
cin >> columns;
cout << "How many rows do you want? ";
cin >> rows;
hollow = columns - 2;
for (int t=1 ; t <= columns ; t++)
{
cout << "A";
}
cout << endl;
for (int n=3 ; n <= rows ; n++)
{
cout << edge;
for (int m=1 ; m <= hollow ; m++)
{
cout << " ";
}
cout << edge <<endl;
edge++;
if(edge > 'Z')
{
edge = 'A';
}
}
for (int b=1 ; b <= columns ;b++)
{
cout << edge;
}
cout <<endl;
return 0;
}
