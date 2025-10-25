



#include <iostream>
using namespace std;

int main()
{
    int rows, coloumns;
    
    cout << "Enter the number of rows and number of coloumns respectively for the size of your box" << endl;
    
    cin >> rows >> coloumns;
    
    for (int i = 0; i < rows; i++) {
        char currentChar;
        
        if (i < 26) {
            currentChar = 'a' + i;
        } else {
            currentChar = 'a' + (i - 26);
        }
        
        if (i == 0 || i == rows - 1) {
            for (int j = 0; j < coloumns; j++) {
                cout << currentChar;
            }
        }
        else {
            cout << currentChar;
            for (int j = 1; j < coloumns - 1; j++) {
                cout << " ";
            }
            cout << currentChar;
        }
        cout << endl;
    }
    
    return 0;
}