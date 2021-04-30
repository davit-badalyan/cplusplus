#include <iostream>

int main()
{
  const int n = 10;
  int i, index;
  int arr[n] = {11, 52, 34, 45, 11, 23, 86, 12, 0, 1};

  index = 0;

  for (i = 1; i < n; i++)
  {
    if (arr[i] > arr[index])
    {
      index = i;
    }
  }

  std::cout << "Index of max: " << index << std::endl;

  return 0;
}