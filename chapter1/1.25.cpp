#include <iostream>
#include "Sales_item.h"

int main () {
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (trans.isbn() == total.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}	
	std::cout << total << std::endl;
	}
	else {
		std::cout << "Error! Please provide an input." << std::endl;
		return -1;
	}
	return 0;
}
