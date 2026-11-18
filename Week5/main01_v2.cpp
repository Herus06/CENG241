#include <iostream>

using namespace std;

class Integer {
    int number;
    public:
    Integer(int n=0);
    friend void print(Integer &);
};
Integer::Integer(int n): number(n) {} //if I didnt send a value, it will be 0

void print(Integer &in) { //we use the friend functions out of classes.
    cout << in.number << endl;
}

int main() {
    Integer obj(5);
    print(obj);
    Integer value;
    print(value);

    return 0;
}
