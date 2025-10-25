#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    int rows;
    int columns;
    cout <<"Enter the size of a box in terms of the number of rows and number of columns: "<< endl;
    cin >> rows >> columns;

    for (int b = 0; b < columns; b++) {
        cout << char(97);
    }
    for (int i = 0; i < rows; i++){
        if (i == 25) {
            i = i - 26;
            rows = rows - 28;
        }
        cout << endl;
        cout << char(98 + i);
        for (int a = 0; a < columns-2; a++) {
            cout << " ";
        
        }
        cout << char(98 + i);
        
    }
    cout << endl;
    for (int b = 0; b < columns; b++) {
        cout << char(98+rows);
    }
}
