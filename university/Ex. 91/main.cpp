#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  int i, n;
  float x, sum;

  std::cout << "Input n : ";
  while (!(std::cin >> n) || n >= 10)
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  x = 1;
  sum = 0;

  for (i = 0; i < n; i++)
  {
    std::cout << "i = " << i << ", "
              << "x = " << x << ", ";

    sum += pow(x, 2);
    std::cout << "sum = " << sum << std::endl;

    x = 0.5 * abs(x - 4);
  }

  return 0;
}