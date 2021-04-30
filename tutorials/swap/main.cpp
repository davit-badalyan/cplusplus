#include <iostream>

int main()
{
  int a, b;

  std::cout << "Enter value of a: ";
  std::cin >> a;
  std::cout << "Enter value of b: ";
  std::cin >> b;

  a = a + b;
  b = a - b;
  a = a - b;

  std::cout << "After swaping a: " << a << ", b: " << b << std::endl;

  return 0;
}