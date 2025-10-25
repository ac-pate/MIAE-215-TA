//assignment1.cpp
//Samuel-José Turcotte
//40339916

#include <iostream>
using namespace std;

int main()
{
int r;
int c;
char x;
x='a';

cout<<"How many rows do you want? Note the maximum is 26.\n";
cin>>r;

while(r>26){
cout<<"Too many rows. Please choose a value below 26\n";
cin>>r;
}



cout<<"How many columns do you want?\n";
cin>>c;



for(int i=0;i<c;i++){
cout<<x;
}
cout<<"\n";
x=x+1;

for(int j=0;j<r-2;j++){
cout<<x;
for(int k=0;k<c-2;k++){
cout<<" ";
}
cout<<x;
cout<<"\n";
x=x+1;
}

for(int l=0;l<c;l++){
cout<<x;
}
return 0;
}