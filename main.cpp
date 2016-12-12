#include <iostream>

int getDigits();

int add(int x, int y);

int main() {
	int x {getDigits()};
	int y {getDigits()};

	std::cout << "I added " << x << " and " << y << " together and got: " << add(x, y) << std::endl;
}
