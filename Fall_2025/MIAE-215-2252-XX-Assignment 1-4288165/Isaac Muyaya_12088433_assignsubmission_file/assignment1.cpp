// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////
int getInt(string message) {
    int num;
    cout << message << "\n";
    cin >> num;
    return num;
}
///////////////////////////////////////////////////////
int main() {
    unsigned short int row_num = getInt("Enter number of Rows");
    unsigned short int column_num = getInt("Enter number of Columns");
    for (int row = 0; row < row_num; row++) {
        for (int column = 0; column < column_num; column++) {

            if (row > 0 && column > 0 && row < row_num - 1 && column < column_num - 1) {
                cout << ' ';
            }
            else {
                cout << static_cast<char>(row + 97);
            }
        }
        cout << "\n";
    }
    return 0;
}
