#include <iostream>

int main(){
	int intVar = 1500000000;
	intVar = (intVar * 10) / 10;
	
	std::cout << "intVar = " << intVar << std::endl;
	
	intVar = 1500000000;
	intVar = (static_cast<double>(intVar) * 10) / 10;
	
	std::cout << "intVar = " << intVar << std::endl;
	std::cin.get();
	
	return 0;
}