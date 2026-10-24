#include <iostream>
using namespace std;

void example(int* &p, double *q) {// p is pointing to adrees of int x in main, q is pointing to address of double y in main
    *p= 100; //directly changing the value of x in main
    *q = 200.5; //directly changing the value of y in main
}

int main() {
    int x = 10;
    double y = 20.5;

    int *a = &x;
    double *b = &y;

    example(a, b);

    cout << *a << endl;  // 100
    cout << *b << endl;  // 20.5

    return 0;
}