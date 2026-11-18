#include <iostream>
using namespace std;

class Date {
    int day, month, year;

    public:
    Date(int d, int m, int y): day(d), month(m), year(y) {}
    void print() const {
        cout << day << "/" << month << "/" << year << endl;}
};

class Student {
    string name;
    Date birthDate;

    public:
    Student(string n, int d, int m, int y): name(n), birthDate(d, m, y) {}
    void print() const {
        cout << "Name: " << name << ", Birth Date: ";
        birthDate.print();
    }
};

int main() {
    Student s1("Cenk Cem", 15, 6, 2000);
    s1.print();

    return 0;
}