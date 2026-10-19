// SOURCE: CENG_241_WEEK2-1_Transition-from-C-To-C++Part-I.ppt/Funtions-4

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

using namespace first;

int main() 
{  
    cout << x <<endl;
    func();
}