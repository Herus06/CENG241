#include <iostream>
using namespace std;

int x = 77 ; 
					
int main() {	
     int x = 99;     					
     
     cout << "x local=" << x << endl;			
     cout << "x global=" << ::x << endl; // there may a problem with Variable Shadowing in proffessional code. So we need to avoid them if possible.
}