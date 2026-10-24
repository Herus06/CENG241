#include <iostream>
using namespace std;

class R {
    int i;
    const int j;
    int &ref;

    public:
    R(int);
};
R::R(int x):i(x), j(x), ref(i) {
    //i = x;
    //j = x; it does not work because j is a constant variable.
    //ref = x; it does not work because ref is a reference variable and it must be initialized when declared.

}

int main() {
    
    R r1(10);
    
    return 0;
}