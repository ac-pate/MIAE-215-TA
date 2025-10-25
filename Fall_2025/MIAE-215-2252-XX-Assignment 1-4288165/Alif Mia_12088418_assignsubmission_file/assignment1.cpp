#include <iostream>
using namespace std;

int main() {
    char letters[26][26] = {
        {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'},
        {'b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b'},
        {'c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c'},
        {'d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d','d'},
        {'e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e'},
        {'f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f','f'},
        {'g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g'},
        {'h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h','h'},
        {'i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i','i'},
        {'j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j','j'},
        {'k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k','k'},
        {'l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l','l'},
        {'m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m'},
        {'n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n','n'},
        {'o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o','o'},
        {'p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p'},
        {'q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q','q'},
        {'r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r','r'},
        {'s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s','s'},
        {'t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t','t'},
        {'u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u','u'},
        {'v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v'},
        {'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
        {'x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'},
        {'y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y','y'},
        {'z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z','z'}
    }; // created 26 columns and rows from a to z so the for loops can cycle through
    
    int column, row; // declared uninitialized variables
    cout << "Please enter the size of the box in terms of # of rows and # of columns: " << endl; // console out for user
    cin >> column >> row; // console in where the user can enter the number of columns and rows

    
    // Print the box with empty middle and borders
    for (int i = 0; i < column; i++) { // inner and outer for loop for 2D array so it can cycle through and print vertically & horizontally
        for (int j = 0; j < row; j++) {
            // If conditions where it prints if satisfies the conditions below else it prints blank when it cycles through
            if (i == 0 || i == column - 1 || j == 0 || j == row - 1) {
                cout << letters[i][j];  // Print border letter
            } else {
                cout << ' ';  // Empty space in middle
            }
        }
        cout << endl;
    }
    
    return 0;
}
