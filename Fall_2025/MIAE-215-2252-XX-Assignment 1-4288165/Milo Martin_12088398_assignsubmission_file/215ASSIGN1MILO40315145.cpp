#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<< "Please enter the size of the box in terms of # of rows and # of columns:"<<endl;
    int rows, cols;
    char a= 97;
    cin>>rows>>cols;

for(int i=0;i<cols;i++)
    {
    cout<<a;
    }
    cout<<endl;
    a++;

for(int j=2;j<rows;j++)
{
    cout<<a;
    for(int i=2;i<cols;i++) {
        cout<<" ";
    }
    cout<<a++<<endl;
}
    for(int i=0;i<cols;i++) {
        cout<<a;
    }

    return 0;
}