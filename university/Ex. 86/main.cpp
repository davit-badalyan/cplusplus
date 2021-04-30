#include <iostream>
#include <math.h>
#include <limits>

int main()
{
  float x, y;

  x = -5;
  do
  {
    std::cout << "x = " << x << ", ";

    if (x > 2)
    {
      y = pow(3, x + 4);
    }
    else
    {
      y = -8;
    }

    std::cout << "y = " << y << ", " << std::endl;

    x += 2;

  } while (x >= -5 && x <= 8);

  return 0;
}