//
//  main.cpp
//  Assignment #1
//
//  Created by Jordan William Burgess on 2025-10-09.
//  Student Number 25710847

#include <iostream>
#include <iomanip> /* Required for std::setw. I looked up this namespace because I kept getting weird code when I wanted to "mutliply" spaces by the number of columns minus 2*/

int main() {
    
    
    int rows; //establishing the variable "rows" to determine how many rows will comprise the rectangle
    
    int columns; //establishing the variable "columns" to determine how many rows will comprise the rectangle
    
    std::cout << "Please input the number of rows and columns you wish to have represented:\n";
    
    std::cin >> rows;
    
    std::cin >> columns;
    
    
    while (rows > 26 || rows < 0 || columns < 0 || columns > 26){ 

/*This bit of code is to prevent the user from entering a number of rows and columns above 26 and below 0. At first I had a lot of redundant "while" loops and decided to consolidate them into one. This isn't a habit of mine.*/
        
        std::cout << "These parameters are out of the 26 letter range!\n\n";
        
        std::cout << "Please input the number of rows and columns you wish to have represented:\n";
        
        std::cin >> rows;
       
        std::cin >> columns;
    }
   
    
    for (int i = 0; i < rows; i++){ //for column indexing: OUTER LOOP SECOND
            
            std::cout << std::endl;
            
            for (int j = 1; j <= columns; j++){ //for row indexing: INNER LOOP FIRST
                
                char alphabet = 'a'+ i;
                
                if ( i != 0 && i != (rows-1)) {
                    
                    std::cout << alphabet <<std::setw(columns-1)<< alphabet; //the use of the std::setw
                    
                    break;
                    
                }
                
                else{
                   
                    std::cout << alphabet;
                }
                
                
            }
            
        }
   
    
    std::cout << std::endl << std::endl;
    
    std::cout << "Would you like to see it again?\ny/n?\n"; // Asks the user if they would like to do it again
   
    char answer;
    
    char y = 'y';
    
    char n = 'n';
   
    std::cin >> answer ;
   
    while (answer != y && answer != n){
    
    std::cout << "Not a valid input.\ny or n ?\n"; // Tells the user that there answer is invalid and that they should answer again
    
        std::cin >> answer ;
   
    }
   
    
    if (answer == y){
     
        main();
        
    }
   
    
    else{
        
        return 0;
        
    }
}
