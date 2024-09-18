#include <iostream>
#include <iomanip>

int main()
{
	float x = 1.01;

	std::cout << "x = " << x << std::endl;
	std::cout << std::showpoint << "x = " << x << std::endl;
	std::cout << std::fixed << "x = " << x << std::endl;

	return 0;
}