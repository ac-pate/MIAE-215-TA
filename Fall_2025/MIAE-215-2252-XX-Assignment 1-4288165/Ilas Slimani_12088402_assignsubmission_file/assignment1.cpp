#include <iostream>
using namespace std;
int main() 


{
	int rows, lines;

	cout << "\nPlease, insert a number of rows and press ENTER: ";
	cin >> rows;

	getchar();

	cout << "\nPlease, insert a number of lines and press ENTER: ";
	cin >> lines;

	getchar();

	int s = rows - 2;

	for (int r = 0; r < rows; r++)
	{
		char a = 'a' + r;
		cout << a ;
	}
	cout << "\n";

	for (int l = 0; l < lines - 2; l++) {
	
		char b = 'b' + l;
		cout << b;
		for (s = 0; s < rows - 2; s++) 
		{
			cout << " ";
		}
		cout << b << "\n";
	}
	
	if( lines > 1) {
		for (int r = 0; r < rows; r++)
		{
			char a = 'a' + r;
			cout << a;
		}
	}
	cout << "\n";

	cout << "\nI am expecting 100% for this beautiful work btw \n";


	cout << "\nWill you give me 100%? Answer by 1 (Yes) or (2) No : \n";

	int x;

	cin >> x;
	if (x == 1) {
		cout << "\nThanks bro ";
	}

	if (x == 2) {
		cout << "\nWTF, go back to admire this masterpiece ";
	}
	
	if (x > 2) {
		cout << "\nU are not funny, go back to admire this masterpiece ";
	}

	if (x < 1) {
		cout << "\nYou aint fooling nobody, go back to admire this masterpiece ";
	}

	getchar();
}
