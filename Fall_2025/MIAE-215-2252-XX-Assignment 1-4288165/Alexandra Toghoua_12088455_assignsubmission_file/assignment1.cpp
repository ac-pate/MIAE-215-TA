#include <iostream>
#include <string>

		int main() {
	int rows, cols;

std::cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
	if (!(std::cin >> rows >> cols)) {
	std::cerr << "Invalid input. Enter two integers.\n";
	return 1;
}

// For simplicty, we may assume that the number of rows is greater or equal than 2, and the number of columns is greater or equal to 2.

	if (rows < 2 || cols < 2) {
	std::cerr << "Error: number of rows and columns must be at least 2.\n";
	return 1;
}

	auto letter_for = [](int i) -> char {
	return static_cast<char>('a'+(i%26));	//wrap after 'z' back to 'a' (safe if rows > 26)
};

//First row: repeated 'a' (letter_for(0))
char ch = letter_for(0);
std::cout << std::string(cols, ch) << '\n';

//Middle rows (rows 2..rows-1) -> row indices 1 .. rows-2 (0-based)
	for (int r=1; r <= rows - 2; ++r) {
		char edge = letter_for(r);
		std::cout << edge;
		if (cols > 2) {
			std::cout << std::string(cols -2, ' ');
}
	std::cout << edge << '\n';
}

//Last row: repeated letter_for(rows-1)
char last = letter_for(rows - 1);
std::cout << std::string(cols, last) << '\n';

return 0;
}
