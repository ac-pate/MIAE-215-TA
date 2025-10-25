// assignement1.cpp

#include <iostream>
#include <string>
#include <cmath>
#include <cstdio> 

using namespace std;

int main() 
{
	int i, j, rows, columns;

	cout << "Please enter the # of rows:" << endl;
	cin >> rows;

	cout << "Please enter the # of columns:" << endl;
	cin >> columns;

	const int number = 97;

	for (i = 1; i <= rows; i++) {
       
		char a = number + (i - 1);
		
		if (i == 1) {

			for (j = 1; j <= columns; j++)

		     	cout << a;
		} 
	} cout << endl;

	for (i = 1; i <= rows; i++) {

		char a = number + (i - 1);

		if (i > 1 &&  i != rows) {

			for (j = 1; j <= columns; j++) {

				if (j == 1 || j == columns)
					
					cout << a;

				else cout << " ";

			} cout << endl;
		} 
	} 

	for (i = 1; i <= rows; i++) {

		char a = number + (i - 1);

		if (i == rows ) {

			for (j = 1; j <= columns; j++)

				cout << a;

		}
	} cout << endl;

	getchar();
	return 0;

}







