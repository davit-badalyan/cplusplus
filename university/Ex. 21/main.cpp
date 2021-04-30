#include <iostream>
#include <math.h>
#include <limits>
// using namespace std;

int main()
{
  int a, b, c, max;

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

  // Assigning a value as max
  max = a;

  // Comparing values
  if (b > max)
  {
    max = b;
  }

  if (c > max)
  {
    max = c;
  }

  std::cout << "Max value is : " << max;

  return 0;
}