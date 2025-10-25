//Author: Elijah Sabado
//For the MIAE 215 course with Ted

/*
Assignment 1: Write a complete C++ program which prompts the user to enter the number of rows and the number
of columns specifying the size of a rectangular box. The program then draws on the screen, using
ASCII characters, a hollow rectangular box. The first row is to consist of the required number of
a characters, the second row consists of a leading b, followed by blanks, followed by the trailing
b, the third row consists of a leading c, followed by blanks, followed by the trailing c, etc.
*/


//Let's get this started. 
#include <iostream>
using namespace std;

int main()
{
//Let's first define our variables for the edges, columns and rows of the box. Since you want the edges of your box to consist of incrementing letters, we will use a char variable.

	char edge;
	edge = 'a'; //start off at a
	unsigned int rows;
	unsigned int columns; //unsigned for maximum efficiency for the given storage. You could use a long, but if you need a box that's bigger than 4bill x 4bill you need some help

//We need to prompt the user to enter the number of rows and columns, so let's be polite and ask them nicely

//Starting with columns
	cout << "Let's build a box!" << endl; 

	cout << "How many columns do you want?" << endl;
	cin >> columns;

//You told us to assume the user would input column or row values greater than 2, so let's make sure that happens... and get a bit of fun out of it
	if ( columns < 2 )
		{
		unsigned short counter; 
		counter = 1;
		do
			{
		cout << "Please enter a bigger number..." << endl;
		cin >> columns;
		counter++;
			if (counter == 5)
				{
				cout << "That's enough." << endl;
				return 0;
				}
			}
		while (columns < 2);
	
		}
//So the above code will end if the user messes around and inputs 1 or 0 more than 5 times. You can easily edit it to add more if you have a higher tolerance.

//Now let's do the same for the number of rows
	cout << "How many rows would you like?" << endl;
	cin >> rows;

	if ( rows < 2 )
		{
		unsigned short counter; 
		counter = 1;
		do
			{
		cout << "Please enter a bigger number..." << endl;
		cin >> rows;
		counter++;
			if (counter == 5)
				{
				cout << "Don't play with me." << endl;
				return 0;
				}
			}
		while (rows < 2);
	
		}


//Okay. Now we need to actually print the box. First, we need to print the leading edge as it doesn't consist of blanks, only characters.

	for ( int beg = 0; beg < columns; beg++ ) //beg simply being our counter for the number of beginning a's
		{
			cout << edge;
		}

	edge++;
	cout << endl; //setting the stage for the printing of the hollow part of the box by incrementing the char edge and starting a new line.

//Now let's print the actual box itself

	for ( unsigned int row = 2; row < rows; row++ ) //we put row = 2 because the leading and trailing rows aren't part of this for loop, so we need 2 less rows (removing 0 and 1)
		{
			
		for ( unsigned int col = 0; col < columns; col++) //col being again our counter for the column we are in
			{
				if (edge == '{') //so that it resets to a if columns > 26 as { is the ASCII character after z
					{
						edge = 'a';
					}
				if (col == 0)
					{
						cout << edge;
					}
				else
					{
						if (col < columns - 1)
							{
							cout << ' ';
							}
						else
							{
							cout << edge;
							}
					}
			}
			edge++;
			cout << endl;
		}

//And now finally all we need to do is print the last edge of the box

	for ( unsigned int end = 0; end < columns; end++ ) //beg simply being our counter for the number of beginning a's
		{
			if (edge == '{') //same as before, resetting to a
				{
				edge = 'a';
				}
			cout << edge;
		}
	
	cout << endl;
	return 0;
	
}