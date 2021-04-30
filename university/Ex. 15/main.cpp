#include <iostream>
#include <math.h>
#include <limits>
// using namespace std;

int main()
{
  int a, b, c, x, y;

  // Input for variables
  std::cout << "Input a : ";
  while (!(std::cin >> a))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  std::cout << "Input b : ";
  while (!(std::cin >> b))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  std::cout << "Input c : ";
  while (!(std::cin >> c))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  std::cout << "Input x : ";
  while (!(std::cin >> x))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  // Calculating y
  if (c > -1 && c < 1)
  {
    y = b + pow(tan(c + a), 2);
  }
  else if (c <= -1)
  {
    y = cos(pow(log(abs(x)), 2)) + pow(x, 8);
  }
  else
  {
    y = pow(a, -10);
  }

  // Printing y value in consol
  std::cout << "Y : " << y;

  return 0;
}