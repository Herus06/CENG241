#include <iostream>
using namespace std;
class Dnm {
    int x;
    
    public:
    Dnm(int a): x(a) {}
    void setX(int a) { x = a; }
    void print() { cout << "x: " << x << endl; }
    int getX() const;
};
int Dnm::getX() const {
    return x;
}

int main() {
    Dnm obj(5);
    obj.print();
    obj.setX(10);
    cout << "After setting x to 10: ";
    obj.print();
    const Dnm obj2(15);
    //obj2.setX(20); // This line will cause a compilation error because obj2 is const
    //obj2.print();  // print() is not a const member function, so it cannot be called on a const object
    cout << "obj2.getX(): " << obj2.getX() << endl; // This is valid because getX() is a const member function
}