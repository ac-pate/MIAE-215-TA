#include<iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "enter the number of rows (from 2 to 26): ";
    cin >> rows;
       if (rows > 26)
    {
        cout << "Oups! That's too many rows. Setting it to the maximum (26) ";
        rows = 26;
    }
       cout << endl;
       cout << endl;
    
    if (rows < 2)
    {
       
        cout << "Oups! That's not enough rows. Setting it to the minimum (2)  ";
        rows = 2;
    }
    cout << "enter the number of columns (from 2 to 26): ";
    cin >> columns;

    cout << endl;

    if (columns > 26)
    {
        cout << "Oups! That's too many columns. Setting it to the maximum (26)  ";
        columns = 26;
    }
    cout << endl;

    if (columns < 2)
    {
        cout << "Oups! That's not enough columns. Setting it to the minimum (2) ";
        columns = 2;
    }

    cout << endl;

    char letter = 'a';

    for (int x=0; x < rows; x++)
    {
        for (int y=0; y < columns; y++)
        {
            if (x==0||x==rows-1||y==0||y==columns-1)
            {
                cout<< letter;
            
            }
            else 
            {
                cout<< " ";
            }

            
        }

        cout << endl;
        letter++;
    
    }
    cout<< endl;
    cout << "Press Enter to exit...";
    cin.get(); 
    cin.get(); 
    return 0 ;
}