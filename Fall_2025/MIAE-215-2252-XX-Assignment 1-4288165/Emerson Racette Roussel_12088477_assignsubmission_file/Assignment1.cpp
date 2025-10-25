#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    cout<<"enter number of rows, then columns.\nboth numbers should be greater or equal to 2.\n";
    cout<<"rows: ";
    cin>>rows;
    
    if (rows > 26)  //bringing back rows to 26 if user input is larger
    {
        rows = 26;
    }
    if (rows >= 2 && rows <= 26)
    {
        cout<<"columns: ";
        cin>>columns;
        
        if (columns >= 2)   //no limit on width of box since same ascii character
        {
            for (int i = 0; i<columns; i++) //first line is easy, only "a" characters
            {
                cout<< char ('a');
            }
            cout<<endl;
            for (int j = 0; j < rows-2; j++)  //rows-2 cuz top and bottom row are not included here
            {
                cout<<char ('b'+ j);    //left wall of letters starting at b
                for (int k = 0; k < columns-2; k++)   //made a for loop to get several spaces (as many as columns - 2)
                {
                    cout<<" ";
                }
                cout<<char ('b'+ j)<<endl;  //right wall of letters starting at b
            }
            for (int l = 0; l < columns; l++)    //last line
            {
                cout<<char ('a' + rows -1);   
            }
            cout<<endl; //only there so that the linux command promt appears one line below
        
        
        }
        else
        {
        cout<<"number of columns has to be an integer greater or equal to 2";
        }
    
    }
    else
    {
        cout<<"number of rows has to be an integer greater or equal to 2";
    }
    
return 0;
}