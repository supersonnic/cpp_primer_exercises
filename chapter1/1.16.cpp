#include <iostream>

int main () {
	int input = 0, sum = 0;
	while (std::cin >> input)
		sum += input;
	std::cout << "The sum of inputed numbers is " << sum << std::endl;
	return 0;
}
