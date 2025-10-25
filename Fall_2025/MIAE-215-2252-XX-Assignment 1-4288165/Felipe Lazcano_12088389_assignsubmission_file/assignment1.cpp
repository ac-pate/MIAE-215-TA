#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n_rows, n_columns, starting_ascii;
	starting_ascii = 97;
	cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
	cin >> n_rows >> n_columns;
	string spaces(n_columns - 2, ' ');	
	for (int ascii_value = starting_ascii; ascii_value < starting_ascii + n_rows; ascii_value++)
	{
		char current_char = static_cast<char>(ascii_value);
		if (ascii_value == starting_ascii or ascii_value == starting_ascii + n_rows - 1)
		{
			cout << string(n_columns, current_char) << "\n";
		}
		else
		{
			cout << current_char << spaces << current_char << "\n";
		}
	}
	return 0;
}
