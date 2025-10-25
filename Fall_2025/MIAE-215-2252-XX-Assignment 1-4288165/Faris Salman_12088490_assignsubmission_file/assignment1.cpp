#include<iostream>
using namespace std;



int main()
{

int rows,columns;
cout<<"please enter the size of the box"<<endl;
cout<<"enter number of rows"<<endl;
cin>>rows;
cout<<"enter number of columns"<<endl;
cin>>columns;

char letter = 'a';

int i,j;
i=1;


if (rows<=26)
{
 if (i==1)
 {
  for ( j=1 ; j<=columns ; j++)
        {
        cout<<letter;
        }
 letter++;
 i++;
 }


 for ( ;i>1 && i<rows;i++) 
 {
 cout<<endl<<letter;
  for ( j=2 ; j<columns ; j++)
        {
        cout<<" ";
        }
 cout<<letter++;
 }

 if (i==rows)
 {
 cout<<endl;
  for ( j=1 ; j<=columns ; j++)
        {
        cout<<letter;
        }
 i++;
 }



cout<<endl;
}
else
{
cout<<"not enought letters in the alphabet!!!"<<endl;
}


return(0);
}
