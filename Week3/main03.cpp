#include <iostream>
using namespace std;

class One{       
     public :	
	 int x;	  
	 
     private:
     void print( )	
	 { cout << x << endl; }	
 }; 

int main ( ) {
      One obj;    
      obj.x = 5 ;   //we can access x because it is public, but we cannot access print() because it is private.
      //obj.print( ) ;  // What will happen? //It will not work.
      cout << obj.x << endl;

    }			