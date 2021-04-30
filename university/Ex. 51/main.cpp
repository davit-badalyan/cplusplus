#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int number;
  int a, b, c;
  bool condition;

  std::cout << "Input number (100-999) : ";
  while (!(std::cin >> number) || number < 100 || number > 999)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  a = number / 100;
  b = (number % 100 - number % 10) / 10;
  c = number % 10;

  std::cout << a << ", " << b << ", " << c << std::endl;

  if (a == b + c)
  {
    condition = true;
    std::cout << "Condition : true";
  }
  else
  {
    condition = false;
    std::cout << "Condition : false";
  }

  return 0;
}