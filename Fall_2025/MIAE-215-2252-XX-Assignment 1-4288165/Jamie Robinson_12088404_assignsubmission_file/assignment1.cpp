#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numrow;
	int numcolumn;

	cout << "Hello, how many rows would you like?" << endl; //user prompts
	cin >> numrow;
	while (numrow < 2 || numrow > 26)  // handles anything outside of alphabetical range
	{
		cout << "Sorry, I need a number between 2 and 26..." << endl;
		cin >> numrow;
	}
	cout << "Great choice! Now how many columns would you like?" << endl;
	cin >> numcolumn;
	while (numcolumn > 133)  // handles anything too big for screen
	{
		cout << "That's pretty big, could you give me a number lower than 133?" << endl; 
		cin >> numcolumn;
	}
	cout << "Here, I made you a rectangle :)" << endl;
	cout << endl;
	
	for (int i = 0; i < numcolumn; ++i) // first row of rectangle
		cout << "a";
	cout << endl;

	if (numrow == 2)// when there's no space
	{
		for (int j = 0; j < numcolumn; ++j)
			cout << "b";
		cout << endl;
	}

	if (numrow > 2)// center of rectangle 
	{
		int numcycles = numrow - 2;
		string alphabet = "abcdefghijklmnopqrstuvwxyz";
		for (int k = 0; k < numcycles; ++k)
		{
			cout << alphabet[1 + k]; 
			for (int space = 0; space < numcolumn - 2; ++space)
				cout << " ";
			cout << alphabet[1 + k];
			cout << endl;
		}
		for (int last = 0; last < numcolumn; ++last) // last row
			cout << alphabet[numrow-1];
		cout << endl;
	}
			
	return 0;
}