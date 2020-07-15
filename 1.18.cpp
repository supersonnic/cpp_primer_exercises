#include <iostream>

int main () {
	int val, new_val, cnt = 1;
	if (std::cin >> val) {
		while (std::cin >> new_val) {
			if (new_val == val)
				++cnt;
			else {
				std::cout << val << " was repeated " << cnt << " times." << std::endl;
				cnt = 1;
				val = new_val;
			}
		}
	std::cout << val << " was repeated " << cnt << " times." << std::endl;
	}
	return 0;
}
