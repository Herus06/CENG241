#include <iostream>
using namespace std;

class Calculator {
public:
    template <typename T>
    void add(T a, T b);
    template <typename T>
    void subtract(T a, T b);
    template <typename T>    
    void multiply(T a, T b);
    template <typename T>
    void divide(T a, T b); 
};
    template <typename T>
    void Calculator::add(T a, T b) {
        cout << "Addition: " << a + b << endl;
    }
    template <typename T>
    void Calculator::subtract(T a, T b) {
        cout << "Subtraction: " << a - b << endl;
    }
    template <typename T>
    void Calculator::multiply(T a, T b) {
        cout << "Multiplication: " << a * b << endl;
    }
    template <typename T>
    void Calculator::divide(T a, T b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        } else {
            cout << "Division: " << a / b << endl;
        }
    }


int main() {
    Calculator calc;
    int num1, num2;
    double num3, num4;
    char operation1, operation2;

    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;
    cout << "Enter two double numbers: ";
    cin >> num3 >> num4;

    cout << "Enter the desired operation to perform on integers (+, -, *, /): ";
    cin >> operation1;
    cout << "Enter the desired operation to perform on doubles (+, -, *, /): ";
    cin >> operation2;
    cout <<"result of the operations: " << endl;
    switch (operation1) {
        case '+':
            calc.add(int(num1), int(num2));
            break;
        case '-':
            calc.subtract(int(num1), int(num2));
            break;
        case '*':
            calc.multiply(int(num1), int(num2));
            break;
        case '/':
            calc.divide(int(num1), int(num2));
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    switch (operation2) {
        case '+':
            calc.add(double(num3), double(num4));
            break;
        case '-':
            calc.subtract(double(num3), double(num4));
            break;
        case '*':
            calc.multiply(double(num3), double(num4));
            break;
        case '/':
            calc.divide(double(num3), double(num4));
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    return 0;
}