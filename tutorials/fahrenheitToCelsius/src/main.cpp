#include <iostream>
#include <limits>

int main() {
	int fTemp, cTemp;
	std::cout << "Enter temperature in fahrenheit : ";
	
	while (!(std::cin >> fTemp))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Try again: ";
	}
	
	cTemp = (fTemp - 32) * 5 / 9;
	
	std::cout << fTemp << " in Fahrenheit is equivalent to " << cTemp << " in Celsius." << std::endl;
	std::cin.get();
	
	return 0;
}