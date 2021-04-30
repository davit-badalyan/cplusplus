#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  float x, y;

  for (x = 2.4; x <= 7.6; x += 0.2)
  {
    std::cout << "x = " << x << ", ";
    y = tan(2 * x + pow(x, 2));
    std::cout << "y = " << y << ", " << std::endl;
  }

  return 0;
}