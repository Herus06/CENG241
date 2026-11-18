#include <iostream>
using namespace std;

class Complex{
double img, real;
public:

Complex(double r=0.0, double i=0.0):img(i),real(r){}
void print(){
cout << real << "+" << img << "i" << endl;

}
Complex& summation(Complex &b);

};

Complex& Complex::summation(Complex &b){
    img+=b.img; //if we dont care data losing, we can use this to make optimization good.
    real+=b.real;
    return *this;
}
int main(){
    Complex obj1(3.0, 5.0);
    Complex obj2(8.0, 4.0);
    obj1.summation(obj2);
    obj1.print();
    return 0;
}