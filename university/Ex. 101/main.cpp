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

  x = 1;
  y = 2;
  sum = 0;

  for (i = 0; i < n; i++)
  {
    std::cout << "i = " << i << ", "
              << "x = " << x << ", "
              << "y = " << y << ", ";

    sum += pow(x + y, 2);
    std::cout << "sum = " << sum << std::endl;

    x = 2 * abs(x + 3);
    y = pow(y, 2) - 4;
  }

  return 0;
}