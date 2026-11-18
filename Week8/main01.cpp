#include <iostream>
using namespace std;
class Example {
    int x;
    float y;
    public:
    Example(int a, float b): x(a), y(b) {}
    void print() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};
Example Sub() { return Example(10, 2.5); }

int main() {
    Example val1(5, 3.14);
    /*Example val2 = val1; // Copy constructor is called here*/
    Example val2(val1); // Copy constructor is called here
    cout << "val1: ";
    val1.print();
    cout << "val2: ";
    val2.print();
    Example val3 = Sub(); // Copy constructor is called here
    cout << "val3: ";
    val3.print();
    
    return 0;
}