
using namespace std;
#include <iostream>

int main()
{
	int width = 1, height = 1, charInUseAscii = 97; ;// Initial values to enter the while loop
	char charInUse = 'a'; // Initial char
	int j, i; // Uses in for loops
	while (height <= 1 || height >= 27) { // Works until valid input is given
		cout << "Please enter the desired width of the box: "; 
		cin >> width;
		cout << "Please enter the desired height of the box: ";
		cin >> height;
		if (height <= 1 || height >= 27) { // Validates the input
			cout << "Height must be between 1 and 26. Please try again." << endl;
		}
	}

	for (j = 0; j < height; j++) { // Y Axis Printer
		charInUse = charInUseAscii; // Updates the char to be used
		charInUseAscii++; // Steps the ASCII number up by one every y axis change
		for (i = 0; i < width; i++) { 
			if (j == 0 || j == height - 1 || i == 0 || i == width - 1) { // X Axis Printer
				cout << charInUse; // Prints the in use Char
			}
			else { // Prints a space
				cout << " ";
			}
		}
		cout << endl; // Ends the line when switching to another level
	}
	return 0;
}