#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  float x, y;

  for (x = -8; x <= 8; x += 3)
  {
    std::cout << "x = " << x << ", ";

    if (x > 3)
    {
      y = pow(x, 2) + 4 * pow(x, 8);
    }
    else
    {
      y = 0;
    }

    std::cout << "y = " << y << ", " << std::endl;
  }

  return 0;
}