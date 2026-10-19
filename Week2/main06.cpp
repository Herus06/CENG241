#include <iostream>
using namespace std;

template <typename T>  // In the sector we gonna use template <typename T> because it increases the readability. 
T sum(T x, T y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;

    double a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    float K, L;
    cin >> K >> L;
    cout << sum(K, L) << endl;

    char c, d; // It will work with ASCII values of characters, and it will return the sum of their ASCII values.
    cin >> c >> d;
    cout << sum(c, d) << endl;

    return 0;
}
