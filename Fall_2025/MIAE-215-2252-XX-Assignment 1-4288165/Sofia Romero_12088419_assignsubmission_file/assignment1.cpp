// Sofia Romero (40284927)
// Oct. 10, 2025
// Assignment 1 

#include <iostream> 
#include <string>


using namespace std;

int main(){
    
    int row, column;
    
    cout << "Assignment 1 : hollow_box_with_letters" << endl; 
    cout << endl; 
    cout << "Please enter # of rows of the box: "; 
    cin >> row;
    cout << "Please enter # of columns of the box: ";
    cin >> column;
    
    
    
    for(int i = 0; i < row; ++i){
        if (i == 0) {
            for(int j = 0; j < column; ++j) {
                cout << 'a'; 
            }
        }else if (i == row - 1) {
            for (int j = 0; j < column; ++j) {
                cout << 'a'; 
            }
        }else {
            char letter = 'b' + i - 1;
            cout << letter;
            
            for(int j = 1; j < column - 1; ++j){
                cout << ' ';
            }
            
            cout << letter;
        }
        cout << endl;
    }
    
    
    return 0; 
}