#include <iostream>

void inputArray(int *arr, int size)
{
  std::cout << "Enter " << size << " items" << std::endl;

  for (int i = 0; i < size; i++)
  {
    std::cin >> arr[i];
  }
}

void printArray(int *arr, int size)
{
  std::cout << "You entered: ";
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
}

int *getSum(int *arr, int size, int fromRange, int toRange)
{
  int sum = 0;
  int *ptr = &sum;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= fromRange && arr[i] <= toRange)
    {
      sum += arr[i];
    }
  }

  return ptr;
}

int main()
{
  int numberOfItems;
  std::cout << "Enter the number of items: ";
  std::cin >> numberOfItems;

  int *arr = new int(numberOfItems);

  inputArray(arr, numberOfItems);
  printArray(arr, numberOfItems);

  int sum;
  int fromRange = 0;
  int toRange = 10;

  sum = *getSum(arr, numberOfItems, fromRange, toRange);

  std::cout << "\nSum between " << fromRange << " and " << toRange << " equals: " << sum << std::endl;

  return 0;
}