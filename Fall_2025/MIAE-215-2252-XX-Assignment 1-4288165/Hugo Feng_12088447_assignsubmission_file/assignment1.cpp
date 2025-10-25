//assignment1.cpp

#include <iostream>
using namespace std;


int main() {
      int row,col;
      cout<<"Please enter the size of # of rows and # columns:";
      cin>> row >> col;
//ask for row and col

//first row

		char firstRow = 'a';
    			for (int y= 0; y< col; y++) {
       				 cout << firstRow;
   		 }
   		 cout <<endl;

// body
		for (int x= 1; x< row-1; x++) {
        		 char letter = 'a' +x;  
       		 	cout << letter;         
        	 for (int y=1; y< col-1; y++) {
           		 cout << ' ';       
        }

        cout << letter <<endl;
}
//last row

	
		if (row >1) {        
		    char lastline = 'a' +(row -1);
       			 for (int y = 0; y < col; y++) {
          	  cout << lastline;
      	  	}
      		  	cout << endl;
   	 }
		

    return 0;
}



