#include <iostream>
using namespace std;


int main()
{
    int rows;
    int columns;
    do {
        cout << "Enter in number of rows for your box: ";
        cin >> rows;
        cout << "Now enter in the number of columns: ";
        cin >> columns;


        if (rows > 26) {
            cout << "\n\nYour number of rows can't be greater than 26 \n";
        }
    } while (rows > 26);


    char L1 = 'a';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == (rows-1)) {
                cout << L1;
            }
            else {
                if (j == 0 || j == (columns - 1)) {
                    cout << L1;
                }
                else {
                    cout << " ";
                }
            }
        }
        L1++;
        cout << "\n";
    }
}