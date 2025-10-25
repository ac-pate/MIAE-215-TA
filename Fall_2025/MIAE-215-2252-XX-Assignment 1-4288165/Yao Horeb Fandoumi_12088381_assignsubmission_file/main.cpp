#include <iostream>

using namespace std;
     
int main() {
    int rows, cols;
    int r,c;

    cout << "Rows:";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;
    
    for (r = 0;r < rows; r++) {
        char rowletter = 'a' + r;
        for (c=0;c<cols;++c) {
            if (r==0 || r == rows-1){
                cout << rowletter;
            }
            else if (c == 0 || c== cols-1){
                    cout << rowletter;
            }else
                cout << ' ';
            }
            cout << '\n';
        }
        
    
    return 0;
}