#include<iostream>
using namespace std;

int main(){
    int rows, cols; //declare them as variables

    cout << "Enter size of the box in terms of number of rows and number of columns";
    cin >> rows >> cols;

    for(int i=0; i<rows; i++) {  //loop for each row
        char letter = 'a'+ i; 

        //first and last row, print all letters
        if (i==0 || i == rows - 1) {
            for (int j = 0; j < cols; j++) {
                cout << letter;
            }
        }else{
            //middle rows
            cout << letter; //1st letter
            for (int j = 0; j < cols -2; j++) {
                cout << " ";
            }
            cout << letter; //last letter
        }
        cout << endl; //next row and new letter
    }

    return 0; }
        
