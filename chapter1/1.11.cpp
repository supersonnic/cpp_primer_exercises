#include <iostream>

int main () {
	int a = 0;
	int b = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	while (a <= b) {
		std::cout << a << std::endl;
		++a;
	}
	return 0;
}
