/* MIAE 215
 Assignment 1
 Fares Kabak
 10/10/2025    */

#include <iostream>
using namespace std;

char a = 65;
int width;
int length;

int main(){
    cout << "Width ?  ";
    cin >> width;
    cout << "Length ?  ";
    cin >> length;   
    
    if ( width <= 1 and length > 1){
        cout << "Minimum width is 2 when length > 1, zero and negative numbers not accepted, try again";
        
    } else {
      for (int i = 0; i + 1 <= length; i++, a++)
        if (i == 0) {
            for (int j = 1; j <= width; j++) 
                cout << a << " ";           //the extra spacing makes the rectanlge into a nicer square when length = width
                cout << endl;
                
        } else if (i+1 < length ) {
            cout << a;
            for (int k = 1; k <= (2*width - 3); k++)   //the 2*width - 3 is there to keep the final column in the correct location (accounting for the extra spacing)
                cout << " ";
            cout << a;
            cout << endl;
            
        } else if (i + 1 ==length) {
            for (int l=1; l <= width; l++)
                cout << a << " ";
                cout << endl;
        }  
    }
}