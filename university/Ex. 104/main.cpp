#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int i, n;
  float x, y, sum;

  std::cout << "Input n : ";
  while (!(std::cin >> n) || n >= 10)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  x = -7;
  y = 8;
  sum = 0;

  for (i = 0; i < n; i++)
  {
    std::cout << "i = " << i << ", "
              << "x = " << x << ", "
              << "y = " << y << ", ";

    sum += pow(x, 2) - 2 * y;
    std::cout << "sum = " << sum << std::endl;

    x = pow(sin(x), 2);
    y = y + 2;
  }

  std::cout << "sum = " << sum << std::endl;

  return 0;
}