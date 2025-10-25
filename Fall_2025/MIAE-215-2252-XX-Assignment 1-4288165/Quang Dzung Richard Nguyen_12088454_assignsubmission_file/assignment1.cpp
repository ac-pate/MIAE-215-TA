
#include <iostream>
using namespace std;

int main() {
    int rows, cols;


    cout << "Please enter the size of the box in terms of # of rows and # of columns: " << endl;


    if (cin >> rows >> cols ) {

        for(int i=0; i<rows; i++) {
            char letter= 'a'+i;
    
            for (int j=0; j<cols; j++) {

                if (i==0 || i==rows-1 || j==0 || j==cols-1) {
                    cout << letter; 

                } else {
                    cout << ' ';
                }
            }
            cout << endl; 
        }
    }

    else {
        cout << "You did not enter two integers." << endl;
    }

    return 0;
}