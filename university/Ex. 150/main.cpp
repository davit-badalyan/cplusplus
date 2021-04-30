#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int k, j, b;
  float s, multiply, sum;

  std::cout << "Input b : ";
  while (!(std::cin >> b) || b >= 10)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  multiply = 1;
  sum = 0;

  for (k = 0; k < 10; k++)
  {
    for (j = 0; j < 8; j++)
    {
      sum += tan(b * k + pow(j, 2));
    }
    std::cout << "multiply = " << multiply << std::endl;

    multiply *= (k + 1) * sum;
    // std::cout << "multiply = " << multiply << std::endl;
  }

  std::cout << "Result = " << multiply << std::endl;

  return 0;
}