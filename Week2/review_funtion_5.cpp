// SOURCE: CENG_241_WEEK2-1_Transition-from-C-To-C++Part-I.ppt/Funtions-5

#include <iostream>

using namespace std;

namespace first 
{
    int x = 5;

    void func() 
    {
        cout << "hi first" << endl;
    }
}

namespace second 
{
    int x = 10;

    void func() 
    {
        cout << "hi second" << endl;
    }
}

int main() 
{
    cout << first::x <<endl;

    first:: func();

    cout << second::x <<endl;

    second :: func();
}


/*
#include <iostream>

using namespace std;

namespace first 
{

    int x=5;

    void func() 
    {

        cout << "hi" << endl;

    }

}

using namespace first;
using namespace second;
int main() 
{
    cout << x << endl;                         !!!!!!! X IS UNDEFINED !!!!!!! IN MAIN.
    func();
}
*/ //output: 