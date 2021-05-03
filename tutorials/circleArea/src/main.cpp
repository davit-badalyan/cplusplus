#include <iostream>
#include <limits>

int main(){
	float rad, area;
	const float pi = 3.14159F;
	
	std::cout << "Enter radius of circle: ";
	while (!(std::cin >> rad))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Try again: ";
	}
	
	area = pi * rad * rad;
	
	std::cout << "Area is : " << area << std::endl;
	std::cin.get();
	
	return 0;
}