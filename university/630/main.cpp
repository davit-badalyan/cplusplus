#include <iostream>
#include <cmath>

double fi(double x, double y, double a)
{
  return sin(x + a * y);
}

int main()
{
  double x = -2.3;
  double y = pow(x, 3);
  double a = 2;
  double result = 0;

  result = pow(a, 0.33) * cos(x) * sqrt(pow(fi(x, y, a) + 1, 2));

  std::cout << "Result: " << result << std::endl;

  return 0;
}