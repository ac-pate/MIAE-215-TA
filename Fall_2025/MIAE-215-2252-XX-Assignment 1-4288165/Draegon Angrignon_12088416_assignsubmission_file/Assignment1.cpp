#include <iostream>
using namespace std;
int main() {
	int rows, columns;
do{	
	cout << "Enter the number of rows(>=2): ";
	cin >> rows;
if (rows < 2){
	cout << "The Number of rows must be at least 2. Try again." << endl; 
	}
} while (rows < 2);

do{ 
	cout << "Enter the number of columns (>=2): ";
	cin >> columns;
if (columns < 2){
	cout << "The number of columns must be at least 2. Try again." << endl;
	}
} while (columns < 2);

for (int i = 0; i < rows; i++) {
	char ch = 'a' + i;

	if (i == 0 || i == rows - 1) {
for (int j = 0; j < columns; j++) {
	cout << ch;
	}
} else {
	cout << ch; 
for (int j = 0; j < columns -2; ++j) {
	cout << ' ';
	}
cout << ch;
	}
	cout << endl;
}
 return 0;
}
