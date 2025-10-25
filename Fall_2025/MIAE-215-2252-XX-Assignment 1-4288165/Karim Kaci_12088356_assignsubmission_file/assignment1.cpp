//
//  main.cpp
//  Assignment1
//
//  Created by Karim Kaci on 2025-10-10.
//

#include <iostream>

using namespace std;

int main(){
    
    int columns = 0, rows = 0; // = 0 -> makes sure that input is a natural number (if not -> read fails (line 19-20) -> variable stays at 0 -> line 22)
    char letter = 'a';
    
    cout << "Please enter the size of the box in terms of # of rows and # of columns: " << endl;
    cin >> rows;
    cin >> columns;
    
    if ( rows > 0 && rows <= 26 && columns > 0 ){ // Does not enter for loop if rows != int between 1 & 26 or if columns != int > 0 ) and displays the error message
        
        for( int i = 0; i < rows; i++ ){ //Prints the number of rows asked by the user
            
            if( i == 0 || i == rows-1 ){ //Prints only the full row of letters if it's the first or last row
                
                for(int k=0; k < columns-1; k++){ //Prints the number of rows asked by the user
                    
                    cout<< letter; //Prints the letter corresponding to the current row (row 1 = 'a's, row 2 = 'b's, ..., row [(rows-1)] = 'z's)
        
                } // end of for loop (Line 28)
                
                cout<< letter;
                
            } // end of if statement (Line 26)
            
            else{
                
               if( columns != 1 )  {
                    
                    cout << letter; // first column
                    
                    for( int j = 0; j < columns-2; j++ ){ // Prints [(number of columns)-2] spaces between first and last column
                        
                        cout<<" ";
                        
                    } // end of for loop (Line 44)
                    
                    cout << letter; // Last column
                   
                }// end of if statement (Line 40)
                
                else{
                    
                    cout << letter; //if columns == 1 (Ex: 5Rx1C), prints only one column
                    
                } // end of else statement (Line 54)
                
            } //end of else statement (Line 38)
    
        letter++; // Change the letter to the nex one for each rows (Ex: row 1 = 'a's --> row 2 = 'b's)
            
        cout << endl; //Skips to the next row
        
        } //end of for loop (Line 26)
        
        
    } // end of if statement (Line 22)
    
    else {
        
        cout << "\nInvalid input: Has to be a natural number between 1 and 26 for rows and a natural number greater than 0 for columns " << endl; // Prints error message if rows != a natural number between 1 and 26 and if columns != a natural number
        
    } // end of else statement (Line 71)
   
return 0;
} // end of main() function
