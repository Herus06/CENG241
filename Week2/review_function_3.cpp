// SOURCE: CENG_241_WEEK2-1_Transition-from-C-To-C++Part-I.ppt/Funtions-3

#include <iostream>

using namespace std;

namespace first 
{
    int x = 5;
    void func()    
    {
        cout << "hi" << endl;
    }
}

int main() 
{
cout << first::x <<endl;
first:: func();
}   