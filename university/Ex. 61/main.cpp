#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int number;
  int a, b, c, d;
  bool condition;

  std::cout << "Input number (1000-9999) : ";
  while (!(std::cin >> number) || number < 1000 || number > 9999)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  a = number / 1000;
  b = (number % 1000 - number % 100) / 100;
  c = (number % 100 - number % 10) / 10;
  d = number % 10;

  std::cout << a << ", " << b << ", " << c << ", " << d << std::endl;

  if (a + b == c + d)
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