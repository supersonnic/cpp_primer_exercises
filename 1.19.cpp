#include <iostream>

int main () {
	int a = 0;
	int b = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> a >> b;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (a <= b) {
		std::cout << a << std::endl;
		++a;
	}
	return 0;
}
