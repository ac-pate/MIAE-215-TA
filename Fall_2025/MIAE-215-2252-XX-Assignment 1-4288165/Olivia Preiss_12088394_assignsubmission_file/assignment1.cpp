#include <iostream>
using namespace std;

// establish variables
int main() {
    int rows, cols;
    
    // get user to input row #
    do {
        cout << "How many rows do you want? ";
        cin >> rows;
        if (rows < 2) cout << "Stop trying to print wimpy little boxes! Number must be greater than or equal to 2.\n";
    } while (rows < 2);

    // get user to input column #
    do {
        cout << "How many columns do you want? ";
        cin >> cols;
        if (cols < 2) cout << "Stop trying to print wimpy little boxes! Number must be greater than or equal to 2.\n";
    } while (cols < 2);

    // print top row
    for (int i = 0; i < cols; ++i)
        cout << 'a';
    cout << endl;

    // print middle rows
    for (int r = 1; r < rows - 1; ++r) {
        char letter = 'a' + (r % 26);
        cout << letter;
        for (int i = 0; i < cols - 2; ++i)
            cout << ' ';
        cout << letter << endl;
    }

    // print bottom row
    char bottom = 'a' + ((rows - 1) % 26);
    for (int i = 0; i < cols; ++i)
        cout << bottom;
    cout << endl;

    return 0;
}

