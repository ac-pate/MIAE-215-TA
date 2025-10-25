/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"enter number of rows:";
   cin>>rows;
   cout<<"enter number of columns:";
   cin>>columns;
    if (rows<=0|| columns<=0){
        cout<<"rows and columns must be positive integers" <<endl;
        return 1;
    }
    for (int i=0; i < rows; i++){
    char ch='a'+i;
        if (ch >'z') ch='a'+(i%26);
        if (i==0)
        for (int j=0; j < columns; j++)
            cout<<ch;
         else if (i==rows-1) {
            for (int j = 0; j<columns ;j++)
            cout<<ch;
        } else {
            cout << ch;
            for (int j = 0; j < columns - 2; j++)
                cout << " ";
            if (columns > 1)
                cout << ch;
        }
        cout << endl;
    }

    return 0;
}