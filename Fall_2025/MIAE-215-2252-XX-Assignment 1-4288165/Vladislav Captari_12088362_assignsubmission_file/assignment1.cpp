/*  Author: Vladislav Captari, Student ID: 40281499
    Instructor: Tadeusz S. Obuchowicz
    Date: October 9, 2025.
    Assignment 1 - Rectangular Letter-Box   */

#include <iostream>         // Including the iostream library to use input and output functions.
using namespace std;        // Using the standard namespace. I had issues with std::cout and std::cin so I decided to use this.

int main(){

    int height, length;         // Initializing the variables to be defined by the user.
    char letter = 'a';          // Initializing the variable letter which will be printed in the rectangle.
    
    const int maxHeight = 55;	// Initialize the maximum height of the rectangle as a variable to be used in a 'while' loop later. The constant value is the number of rows that fit on the screen.
    const int maxLength = 119;	// Initialize the maximum length of the rectangle as a variable to be used in an 'while' loop later. The constant value is one less than half the number of columns that fit on the screen.
    
    cout << "Enter the height of the rectangle: ";          // Asking the user to input the height of the rectangle.
    cin >> height;                                          // Storing the user input in variable height.
    
    while (height > maxHeight){
    
    	cout << "The height of the rectangle is too large. Please enter a height smaller or equal to 55." << endl;	// Printing a message that informs the user of the height limitation of the rectangle.
    	cout << "Enter the height of the rectangle" << endl;
	cin >> height;

	}
    
    cout << "Enter the length of the rectangle: ";          // Asking the user to input the length of the rectangle.
    cin >> length;                                          // Storing the user input in variable length.
    
    while (length > maxLength){		// Evaluating whether user input for variable length is greater than value of variable maxLength. If expression is TRUE, run code below.
    
    	cout << "The length of the rectangle is too large. Please enter a length smaller or equal to 119." << endl;	// Printing a message that informs the user of the length limitation of the rectangle.
    	cout << "Enter the length of the rectangle: " << endl;									// Asking the user to input the length of the rectangle.
    	cin >> length;	
    
    }
    	for (int row = 1; row <= height; row++) {                                   // Incrementing rows until the rectangle height is reached.
		
		for (int column = 1; column <= length; column++) {                      // Incrementing columns until the rectangle length is reached.

			if (row == 1 || row == height || column == 1 || column == length) { // Stating the borders of the rectangle, and checking if the current row or column is a border.
			
				cout << letter << ' ';              // Print borders with the current letter, with each letter being followed by a single space.

			} else {

				cout << "  ";                       // Print pairs of spaces inside the rectangle.

			}

		}

	cout << endl;                               // Move to next row after finishing the current row.
	letter++;                                   // Incrementing the letter after each row.

	if (letter > 'z') letter = 'a';             // Wrapping the letter back to 'a' if the character value exceeds 'z'.
	}

return 0;                                       // Indicating that the program ended successfully.  

}
