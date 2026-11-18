#include <iostream>

using namespace std;
class S;


class X
{
double balance=6672.16;

public:

X(double newbalance=0): balance(newbalance){}

friend class S;

};

class S
{
    double s;

    public:

    double f(X &);
};

double S::f(X &setmoney){
    s= setmoney.balance;
    return s;
}

int main(){

X first;
S second;
cout << second.f(first) << endl;
}