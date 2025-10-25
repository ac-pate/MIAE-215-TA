#include <iostream> 
using namespace std;

int main() {
    int rows, cols;
    
    cout << "please enter the size of the box in terms of # number of rows and columns ";
    cin >> rows >> cols;
    
    if (rows > 26) { 
        cout << "26 is the maximum # of rows, sorry. \n";
        rows = 26;
    }
    
    for (int j = 0; j < cols; j++) {
        cout << 'a';
    }
    cout << endl;
    
    for (int i = 1; i < rows -1; i++) {
        char rowChar = 'a' + i;
        
        cout << rowChar;
        
    for (int j =1; j < cols -1; j++) {
        cout << ' ';
        }
    
    if (cols > 1) {
        cout <<rowChar;
        }
    
        cout << endl;
}

if (rows > 1) { 
    char lastChar = 'a' + rows -1;
    for (int j = 0; j<cols; j++) { 
        cout << lastChar;
    }
    cout <<endl;
}

return 0;

}

