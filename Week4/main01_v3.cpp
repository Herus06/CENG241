#include <iostream>
using namespace std;

class Rectangle {         			
        private : 
        int width, length; 
              
        public :		
            void area(int w, int h){
                width = w;
                length = h;
                cout << "Area: " << width * length << endl;

            } 
};

int main ( ) {
    Rectangle r; 		
    r.area (5, 3);   		
    return 0;
}