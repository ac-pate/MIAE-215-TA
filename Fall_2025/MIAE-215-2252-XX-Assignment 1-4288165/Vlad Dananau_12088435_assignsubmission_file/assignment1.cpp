//Author: Vlad Dananau
//October 8, 2025
//assignment1.cpp
//creating a box

#include <iostream>
using namespace std;

int main() {

	//variables
	int x, y, i = 1, j = 1;
	char a = 'a';

	//prompt
	cout << "Please enter the size of the box in terms of # of rows and # of columns : \n";
	cin >> x; cin >> y; cout << "\n";

	//top lid
	while (i <= x) {
		cout << a;
		i++;
	}
	cout << "\n";

	//stuff in between
	while (j < y - 1) {

		if (j < y) {
			a++;
			cout << a;

			i = 1;
			while (i < x - 1) {
				cout << " ";
				i++;
			}

				if (x > 1) {
				cout << a;
			}

			j++;
		}

		cout << "\n";
	}

	//bottom lid
	i = 1;
	a++;
	if (y > 1) {
		while (i <= x) {
			cout << a;
			i++;
		}
	}
	
	cout << endl;
	return 0;
}