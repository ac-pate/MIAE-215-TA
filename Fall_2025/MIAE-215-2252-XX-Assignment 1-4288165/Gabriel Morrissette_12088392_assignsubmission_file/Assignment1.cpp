#include <iostream>

using namespace std;

int main(){

// VARIABLES
int i; //rows
int j; //columns

char a = 'a'; //Character


//User prompt
cout << "Enter the number of rows that you want: ";
cin >> i;
cout << "Enter the number of columns that you want: ";
cin >> j;

//loops program
char b = a++ ;
for(int n=0; n<j;n++){
cout << b;
}
cout << "\n";


for (int m = 2; m < i; m++){
    b = a++;
    cout << b ;
   
    for (int n = 2; n < j; n++){
        cout << ' ' ;
    }
    cout << b;
   
    cout << "\n";
}

b = a++;

for (int n=0; n<j && i>1 ; n++){
    cout << b;
}




    return 0;
}