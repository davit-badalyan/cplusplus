#include <iostream>

int max(int x, int y, int z)
{
  int max = x;

  if (y > max)
  {
    max = y;
  }

  if (z > max)
  {
    max = z;
  }

  return max;
}

int main()
{
  int a = 2;
  int b = 0;
  int c = 0;
  int result = 0;

  result = max(3, a + b, c) - max(a + b, b + c, a + c);

  std::cout << "Result: " << result << std::endl;

  return 0;
}