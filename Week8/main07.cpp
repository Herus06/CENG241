#include <iostream>
using namespace std;

class Dept {
    string dname;

    public:
    void read() { cin >> dname; }
    void print() const { cout << "Department: " << dname << endl; }
};
class Instructor {
    string name;
    Dept *d;

    public:
    Instructor(Dept *p, string n): d(p), name(n) {}
    void display() const {
        cout << "Name: " << name << " ";
        d->print();
    }
};

int main() {
    Dept d1;
    d1.read();
    Instructor i1(&d1, "Arda S.");
    i1.display();

    return 0;
}