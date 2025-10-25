#include <iostream>

using namespace std;

int main(){
        int rows, cols;
        cout << "Please enter the size of the box using  # of rows and columns:";

        cin >> rows >> cols;

        if (rows < 2 || cols < 2) {
                cout << " Number of rows and columns must be at least 2." << endl;

        return 1;
        }

        for (int i = 0; i < rows; ++i) {
        char letters  = 'a' + i;
        if(i == 0 || i == rows -1) {
                for (int j = 0; j < cols; ++j) {

                cout << letters ;
        }

        } else {

                cout << letters ;
                for (int j = 1; j< cols - 1; ++j) {
                cout << ' ';


        }
        cout << letters ;
        }
        cout << endl;
        }

                return 0;

        }

