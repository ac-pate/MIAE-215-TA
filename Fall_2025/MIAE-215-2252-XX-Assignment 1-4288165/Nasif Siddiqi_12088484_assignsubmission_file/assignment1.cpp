#include <iostream>
using namespace std;

int main(){
    int rows; 
    int columns;
    char letter = 'a'; // INTIAL LETTER

    cout << "Please enter the size of the box in terms of # of rows and # of columns: ";
    cin >> rows >> columns;

    for(int i=1; i<=rows; i++){
        if ((i==1)||(i==rows)){ // IF FIRST OR LAST ROW
            for (int j=1; j<=columns; j++){
                cout << letter;
            }
        }
        else { // IF ANY ROW IN THE BODY
            for (int j=1; j<=columns; j++){
                if((j==1)||(j==columns)){ // IF FIRST OR LAST COLUMN
                    cout << letter;
                }
                else { // IF ANY ROW IN THE BODY
                    cout << " ";
                }
            }
        }    

        cout << endl;
        letter++;
    }

    return 0;
}