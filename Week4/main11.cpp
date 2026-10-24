#include <iostream>
using namespace std;

class FillArray {

    int arr[5];

    public:
    FillArray(int n=0) {// if no argument is provided, n will default to 0
        for(int i=0; i<5; i++) {
            arr[i] = n;
        }
    }
    void print() {
        for(int i=0; i<5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    FillArray obj1;
    FillArray obj2(10);
    obj1.print();
    obj2.print();

    return 0;
}