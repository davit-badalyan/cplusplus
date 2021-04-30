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

  int tmp;
  // ascending
  if (a > b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  if (c > d)
  {
    tmp = c;
    c = d;
    d = tmp;
  }
  if (a > c)
  {
    tmp = a;
    a = c;
    c = tmp;
  }
  if (b > d)
  {
    tmp = b;
    b = d;
    d = tmp;
  }
  if (b > c)
  {
    tmp = b;
    b = c;
    c = tmp;
  }

  // descending
  // if (a < b)
  // {
  //   tmp = a;
  //   a = b;
  //   b = tmp;
  // }
  // if (c < d)
  // {
  //   tmp = c;
  //   c = d;
  //   d = tmp;
  // }
  // if (a < c)
  // {
  //   tmp = a;
  //   a = c;
  //   c = tmp;
  // }
  // if (b < d)
  // {
  //   tmp = b;
  //   b = d;
  //   d = tmp;
  // }
  // if (b < c)
  // {
  //   tmp = b;
  //   b = c;
  //   c = tmp;
  // }

  std::cout << a << ", " << b << ", " << c << ", " << d;

  return 0;
}