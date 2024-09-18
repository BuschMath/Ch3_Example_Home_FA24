#include <iostream>
#include <iomanip>

int main()
{
	float y = 21.052;

	std::cout << "y = " << y << std::endl;
	std::cout << std::showpoint << "y = " << y << std::endl;
	std::cout << std::fixed << "y = " << y << std::endl;
	std::cout << std::scientific << "y = " << y << std::endl;

	float x = 1.01;

	std::cout << "x = " << x << std::endl;
	std::cout << std::showpoint << "x = " << x << std::endl;
	std::cout << std::fixed << "x = " << x << std::endl;
	std::cout << std::scientific << "x = " << x << std::endl;

	return 0;
}