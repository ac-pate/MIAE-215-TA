#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> cols;

    cout << '\n';

    char a = 'a';

    for (int i = 0; i < rows; i++) {

        char newChar = a + (i % 26);

        for (int j = 0; j < cols; j++) {

            if (i == 0 || i == rows - 1) {

                cout << newChar;
            }
            else if (j == 0 || j == cols - 1)
            {
                cout << newChar;
            }
            else {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
   
}
