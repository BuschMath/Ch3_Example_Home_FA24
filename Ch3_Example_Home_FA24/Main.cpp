#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	float z = 12;
	std::cout << "z = " << z << std::endl;
	std::cout << std::setw(10) << "z = " << z << std::endl;
	std::cout << std::setw(10) << "abcdefghijklmnz = " << z << std::endl;
	std::cout << std::setprecision(1) << "z = " << z << std::endl;

	float y = 21.052;

	std::cout << "y = " << y << std::endl;
	std::cout << std::setprecision(4) << "y = " << y << std::endl;
	std::cout << std::showpoint << "y = " << y << std::endl;
	std::cout << std::fixed << "y = " << y << std::endl;
	std::cout << std::scientific << "y = " << y << std::endl;

	float x = 1.01;

	std::cout << "x = " << x << std::endl;
	std::cout << std::showpoint << "x = " << x << std::endl;
	std::cout << std::fixed << "x = " << x << std::endl;
	std::cout << std::scientific << "x = " << x << std::endl;

	std::string s = "Hello, World!";
	std::cout << "s = " << s << std::endl;
	std::cout << "s = " << s.length() << std::endl;
	std::cout << "s = " << s.size() << std::endl;
	std::cout << "s = " << s.find("World") << std::endl;
	std::cout << "s = " << s.find("world") << std::endl;
	std::cout << "s = " << s.substr(3, 5) << std::endl;
	std::cout << "s = " << s.at(12) << std::endl;
	std::cout << "s = " << char(std::toupper(s.at(11))) << std::endl;
	std::cout << "s = " << char(std::tolower(s.at(0))) << std::endl;

	return 0;
}