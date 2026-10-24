#include <iostream>
using namespace std;

class Rectangle {         			
        private : int width, length; 
              
        public :		
                                                                        /*Rectangle(int w, int h) {
                                                                        width = w;
                                                                        height = h;
                                                                    }
                                                                    int area() {return width * height;}	*/
            void setWidth(int);
     		void setLength(int);
            int area( ); 
            void printArea();
            void perimeter();
           
    };
    void Rectangle::setWidth(int w)	
    {    width = w;  }
    void Rectangle::setLength(int lng)	
    {    length = lng;  }
    int Rectangle::area( )	
    {    return length*width;  }
    void Rectangle::printArea() {
        cout << "Area: " << area() << endl;
    }
    void Rectangle::perimeter() {
        cout << "Perimeter: " << 2 * (width + length) << endl;
    }
    
    int main ( ) {
           Rectangle r; 		
           r.setWidth (5);   		
           r.setLength (3);   		
           r.printArea();
            r.perimeter();
           return 0;
    
        }