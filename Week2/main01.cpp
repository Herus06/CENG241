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

namespace sadri{  // It is a namespace with my name
    void print() {
        std::cout << "It namespaced with sadri\n";
    }
}

using namespace std; // it is a global namespace when we gonna use it on the main function.
                    // We generally use this on the top but in proffessional code we need to avoid them to make the code more understandable and avoid confusion.
void print() {
    cout << "It is in the global namespace\n";
}

int main() {
    ScopeA::print();
    ScopeB::print();
    sadri::print();
    print();
}
