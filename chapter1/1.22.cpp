#include <iostream>
#include "Sales_item.h"

int main () {
	Sales_item item1, item;
	if (std::cin >> item1) {
		while (std::cin >> item) {
			item1 += item;
		}
	std::cout << item1 << std::endl;
	return 0;
	}
	else
		std::cout << "Error! Please provide an input." << std::endl;
		return -1;
}
