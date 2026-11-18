#include <iostream>

using namespace std;

class A{
int x;

public:
A(int n=0): x(n) {}

int getX() const{
    return x;
}
};

class B{
int y;

public:

B(int n=0): y(n) {}

int f(const A &obj){
    y = obj.getX();
    return y;
}
int getY() const{
    return y;
}
friend class C;
};

class C{
    int k;
    public:
    C(int n=0): k(n) {}
int f(const B &obj){
    k = obj.getY();
    return k;
}

    void print3(const B &obj){
        cout << k << endl;
    }
    void print2(const B &obj){
        cout << obj.getY() << endl;
    }
};

int main(){
    A obj1(56);
    B obj2(45);
    C obj3(99);
    obj2.f(obj1);
    obj3.print3(obj2);
    obj3.print2(obj2);
    return 0;
}