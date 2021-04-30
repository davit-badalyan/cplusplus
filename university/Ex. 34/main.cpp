#include <iostream>
#include <limits>

int main()
{
  int a, b, c, d;

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

  std::cout << "Input d : ";
  while (!(std::cin >> d))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Try again: ";
  }

  if (a + b == c + d)
  {
    std::cout << "True" << std::endl;
  }
  else
  {
    std::cout << "False" << std::endl;
  }

  return 0;
}