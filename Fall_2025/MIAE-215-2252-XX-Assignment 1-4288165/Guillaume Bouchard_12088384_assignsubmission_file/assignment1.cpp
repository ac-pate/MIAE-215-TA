#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, b, columns, rows;
    cout << "Enter a number of rows between 1 and 26 for the box"; 
    cin >> rows;
    if (rows > 26 || rows < 1) {
        cout << "Invalid number of rows, the number of rows will be set to 26";
        rows = 26; 
        cout << endl; }
    cout << "Enter a number of coulumns greater than 1 for the box";
    cin >> columns;
    if (columns < 1 ) {
        cout << "Invalid number of columns, the number of columns will be set to 1";
        columns = 1; 
        cout << endl; }
    
    for (i = 0; i < rows ; i++) {
        char cHar = 'a'+ i;
        for (b = 0; b < columns ; b++) {
          if (i == 0 || i == rows - 1) {
              cout << cHar; }
              else {
                  if (b == 0 || b == columns - 1) {
                      cout << cHar; }
                      else {
                          cout << ' '; }
                  }
            }
             cout << endl;
        }
 return 0;
  
}