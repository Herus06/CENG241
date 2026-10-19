#include <iostream>

namespace ScopeA {
    void print() {
        std::cout << "Namespace Scope A\n";
    }
}

namespace ScopeB {
    void print() {
        std::cout << "Namespace Scope B\n";
    }
}

int main() {
    //print(); does not work because it can just use with global namespace(STD).

    ScopeB::print();
    ScopeA::print();
}
