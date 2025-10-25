// Author: Folake Agard 
// Date: October 10, 2025
// Course: MIAE 215 
// To: Tadeusz Obuchowicz 


#include <iostream>
using namespace std;

int main() 
{
int rows, columns;

cout << "Please enter the size of the box in terms of # of rows and # of columns: "; 
  
cin >> rows >> columns;




for (int f = 0; f < columns; f++) 
{
cout << 'a';    
}
cout << endl;



for (int n = 1; n < rows - 1; n++) 
{
char letter = 'a' + n;  

cout << letter;  



    
for (int f = 0; f < columns - 2; f++) 
{
cout << ' ';
}
if (columns > 1) 
{
cout << letter;
}
cout << endl;
}




if (rows > 1) 
{
char letter = 'a' + (rows - 1);
for (int f = 0; f < columns; f++) 
{
cout << letter;
}
cout << endl;
}
return 0;
}


