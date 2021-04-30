#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  float x, y;

  x = -7.5;
  do
  {
    std::cout << "x = " << x << ", ";

    y = log(pow(x, 2) + 4) / log(3);

    std::cout << "y = " << y << ", " << std::endl;

    x += 0.3;

  } while (x >= -7.5 && x <= 8.3);

  return 0;
}