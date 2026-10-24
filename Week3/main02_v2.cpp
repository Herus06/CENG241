#include <iostream>
using namespace std;

class One{       
    int x; //we made x private.
     public :	
     One(int value) : x(value) {} //constructor to initialize x
	 void print( )	
	 { cout << x << endl; }	    
 }; 

int main ( ) {
      One obj(5);    
      obj.print( ) ;

      return 0;

    }			