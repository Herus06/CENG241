// SOURCE: CENG_241_WEEK2-1_Transition-from-C-To-C++Part-I.ppt/Default-Parameters-2
#include <iostream>
using namespace std;

void f(int x=1, int y=5)

{ cout << x << " " << y << endl;

}

int main() {

f(7,8);

f(7);

f();

}
// output: 7 8
// 7 5
// 1 5