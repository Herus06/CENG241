#include <iostream>
using namespace std;

class Count {
    static int count;

    public:
    Count() {
        count++;
    }
    void print() const {
        cout << "Count: " << count << endl;
    }
};
int Count::count = 0;

int main() {
    Count c1;
    c1.print();
    Count c2;
    c2.print();
    Count c3;
    c3.print();

    return 0;
}