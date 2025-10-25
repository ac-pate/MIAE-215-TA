//Mohamed Reda Saber
//40308994
// Assignment 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int row,colm;
    cout<<"Please enter the size of the box in terms of # of rows and # of columns:  ";// Declaring the two variables to input
    cin>> row;
    cin>>colm;

  char letter='a'; 

    for (int i=0;i<row;i++) {     //loop for the 
        
        
          if (i==0) {                 //for the first row
            for (int k =0;k<colm;k++)
                cout<<letter;
                }
          
        
        else if (i==row-1) {        //last row 
            for (int k=0;k<colm;k++)
                cout<<letter;
        }
    
        else {                          //inside of the empty box
            cout<<letter;
            
            for (int k=0;k<colm-2;k++)
                cout<<' ';
            
            if (colm>1)
                cout<<letter;
        }
        cout<<endl;
        letter++; //past the letter z, the other ASCII character will print it out
    }

    return 0;
}
