#include <iostream>
using namespace std;

int main(){
int rows;
int columns;
cout << " Please enter the size of the box in terms of # rows and # of columns(between 1 and 26 ) ";
cin >> rows >> columns;
if ( rows == 0 || rows > 26 || columns == 0 || columns >26){
cout << "the number should be between 1  and 26 ";
return 0;
}
for(int i = 0; i < rows  ; i++){
char letter = 'a' + i;
if (i == 0 || i == rows - 1  ){
for (int j = 0; j < columns ; j++){
cout << letter;
}
}
else{
cout << letter;
for (int j = 0; j < columns - 2 ; j++){
cout << " ";
}
if (columns >1){
cout<< letter;

}
}

cout << endl;

}



return 0;
}


