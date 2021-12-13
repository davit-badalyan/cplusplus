#include <iostream>

int const size = 10;

void setMaxIndex(int (&array)[size], int &index, int &max)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] > max)
    {
      index = i;
      max = array[i];
    }
  }
}

void setSumOfValuesAfterIndex(int (&array)[size], int &index, int &sum)
{

  for (int i = index + 1; i < size; i++)
  {
    sum += array[i];
  }
}

int main()
{
  int array[size] = {0, 1, 2, 10, 4, 5, 6, 7, 8, 9};
  int max = 0;
  int sum = 0;
  int index = 0;

  setMaxIndex(array, index, max);
  setSumOfValuesAfterIndex(array, index, sum);

  std::cout << "Index : " << index << std::endl;
  std::cout << "Max : " << array[index] << std::endl;
  std::cout << "Sum : " << sum << std::endl;

  return 0;
}