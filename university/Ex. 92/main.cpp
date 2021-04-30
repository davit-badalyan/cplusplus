#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int i, n;
  float x, multiply;

  std::cout << "Input n : ";
  while (!(std::cin >> n) || n >= 10)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  x = 0.5;
  multiply = 1;

  for (i = 0; i < n; i++)
  {
    std::cout << "i = " << i << ", "
              << "x = " << x << ", ";

    multiply *= x;
    std::cout << "multiply = " << multiply << std::endl;

    x = tan(x + 2);
  }

  return 0;
}