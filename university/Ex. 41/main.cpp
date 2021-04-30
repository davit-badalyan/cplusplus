#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int x, y, z;

  std::cout << "Input x : ";
  while (!(std::cin >> x))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  std::cout << "Input y : ";
  while (!(std::cin >> y))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  if (pow(x, 2) + pow(y, 2) > 1 && pow(x, 2) + pow(y, 2) < 4)
  {
    z = 0;
  }
  else
  {
    z = x + y;
  }

  std::cout << "z : " << z;

  return 0;
}