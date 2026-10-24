#include <iostream>
using namespace std;

class Point {
    int x, y;

    public:
    Point(int=0, int=0);
    void display() {cout << "X: " << x << ", Y: " << y << endl;}
};
Point::Point(int a, int b) {
    x = a;
    y = b;
}

int main() {
    Point p(10, 20);
    p.display();
    Point p2;
    p2.display();
    Point p3(30);
    p3.display();
    /*
    Point p4(, 50); it will not compile because the first argument is missing. 
    The constructor expects two arguments, and if you want to use the default value for the first argument,
    you need to provide a value for the second argument as well.

    it will use left to right.
    */
    return 0;
}