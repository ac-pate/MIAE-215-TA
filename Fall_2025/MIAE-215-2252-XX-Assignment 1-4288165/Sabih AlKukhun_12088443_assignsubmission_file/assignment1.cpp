#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    if (!(std::cin >> rows >> cols)) return 0;         
    if (rows <= 0 || cols <= 0) return 0;              

    for (int r = 1; r <= rows; ++r) {
        char ch = static_cast<char>('a' + (r - 1) % 26); 

        if (r == 1 || r == rows) {
          
            for (int c = 0; c < cols; ++c) std::cout << ch;
            std::cout << '\n';
        } else {
            if (cols == 1) {
                
                std::cout << ch << '\n';
            } else if (cols == 2) {
               
                std::cout << ch << ch << '\n';
            } else {
                
                std::cout << ch;
                for (int c = 0; c < cols - 2; ++c) std::cout << ' ';
                std::cout << ch << '\n';
            }
        }
    }

    return 0;
}
