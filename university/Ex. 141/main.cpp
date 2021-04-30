#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int m, n, a;
  float w, multiply, sum;

  std::cout << "Input a : ";
  while (!(std::cin >> a) || a >= 10)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  multiply = 1;
  sum = 0;

  for (m = 0; m < 5; m++)
  {
    for (n = 0; n < 6; n++)
    {
      sum += pow(a, m + n);
    }
    std::cout << "multiply = " << multiply << std::endl;

    multiply *= sum;
    std::cout << "multiply = " << multiply << std::endl;
  }

  w = multiply;
  std::cout << "Result = " << w << std::endl;

  return 0;
}