#include <iostream>

int value = 10; //global

namespace First {
int value = 20; //variable in namespace first
}

namespace Second {
int value = 30; //variable in namespace second
}

int main() {
	int value = 5; //variable in the main function

	std::cout << "Local variable: " << value << '\n';
	std::cout << "Global variable: " << ::value << '\n';
	std::cout << "First namespace variable: " << First::value << '\n';
	std::cout << "Second namespace variable: " << Second::value << '\n';

	return 0;
}
// WE CAN USE LIKE THAT 

/*
using namespace std;

int main() {
	int value = 5; //variable in the main function

	cout << "Local variable: " << value << '\n';
	cout << "Global variable: " << ::value << '\n';
	cout << "First namespace variable: " << First::value << '\n';
	cout << "Second namespace variable: " << Second::value << '\n';

	return 0;
}
*/