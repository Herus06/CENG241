#include <iostream>
using namespace std;

class Rational {
    int numerator;
    int denominator;

    public:
    Rational(int n, int d): numerator(n), denominator(d) {}
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }
    Rational product(const Rational& r) const {
        return Rational(numerator * r.numerator, denominator * r.denominator);
    }
};

int main() {
    Rational t(1, 2), s(1, 3);
    Rational result = t.product(s);
    cout << "Product: " << result.getNumerator() << "/" << result.getDenominator() << endl;

    return 0;
}