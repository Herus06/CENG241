#include <iostream>
using namespace std;

class Course {
    string courseCode;
    int *mt, *final;
    int count;

    public:
    Course(string code, int c): courseCode(code), count(c), mt(new int[c]), final(new int[c]) {}
    void readGrades() {
        for (int i =0; i < count; i++) {
            cin >> mt[i] >> final[i];
        }
    }
};

int main() {
    Course c1("CENG241", 172);
    c1.readGrades();
    Course c2 = c1; // This will cause a shallow copy, leading to potential issues with dynamic memory
    c2.readGrades(); // This will cause undefined behavior because c2's mt and final pointers point to the same memory as c1's, leading to double deletion when both objects are destroyed.
}