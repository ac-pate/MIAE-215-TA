#include <iostream>
using namespace std;

int main() {
    int row, col;
cout << "Rayan Bouguettaya 40347515 > \n";
    cout << "Enter number of rows: \n";
    cin >> row;

    cout << "Enter number of columns: \n";
    cin >> col;

    cout << "Number of rows entered: " << row << " and number of Columns entered: " << col << "\n";

    
    for (int i = 0; i < col; i++)
        cout << 'a';
   cout << "\n";

   
    for (int i = 1; i < row - 1; i++) {
        char letter = 'a' + i; 
        cout << letter;         

      
        for (int j = 0; j < col - 2; j++)
            cout << ' '; // center space
cout << letter << "\n"; 
    }

    char letterEnd = 'a' + (row - 1);
    for (int i = 0; i < col; i++)
        cout << letterEnd;
    cout << endl;
cout << "Rayan Bouguettaya 40347515 >\n";
    return 0;
}