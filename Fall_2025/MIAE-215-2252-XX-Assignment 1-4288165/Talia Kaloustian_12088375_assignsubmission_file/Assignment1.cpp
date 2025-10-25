/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Talia Kaloustian
// ID: 40311776
#include <iostream>
using namespace std;

int main()

{
    int rows, columns;
    char letter = 'a';
    
    cout<< "Please enter the size of the of the box in terms of # of rows:" << endl;
    cin >> rows;
    while(rows > 26 || rows<=2)//the input of the user has to be smaller than 26 or greater and or equal to 2
    {
        cout<<"the number is too big or too small, Try again"<<endl;
        cout<<"make sure the number is smaller than 26 or greater and or equal to 2"<<endl;
        cin>> rows;
    }
    cout<<" Please enter the size of the box in terms of # of column:"<<endl;
    cin>> columns;
  
    while (columns <= 2 ) // the input of the user needs to be greate and or equal to 2 to have a rectangular box with a hollow part
    {
        cout << " the number is too small try again:" << endl;
        cout << " make sure its greater and or equal to 2" << endl;
        cin>>columns;
        
    }
    
    for (int x = 0; x < columns; x++) cout << letter;//this loop is to create the first row of the box with a's
    cout<<endl;// program skips line to the next row once the loop has run
    letter++;
    

for (int y=0; y<rows -1; y++){
    for (int m=0;m<columns; m++){
        if(m==0) cout<< letter;
        else if (m==(columns-1))cout <<letter;
        else cout<<" ";
}
// this part is to make the "empty box area" of the box
    
    cout<<endl;// program skips line to the next row once the loop has run
    letter ++;
}
for (int x=0;x<columns;x++)cout<<letter;// this loop is for the last row of the box 
return 0;
}