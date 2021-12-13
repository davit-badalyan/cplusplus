#include <iostream>

int const size = 4;

void setArrayFromMatrix(int (&array)[size], int (&matrix)[size][size])
{
  for (int i = 0; i < size; i++)
  {
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
      if (i + j >= size - 1)
      {
        sum += matrix[i][j];
      }
    }
    array[i] = sum;
  }
}

void printArray(int (&array)[size])
{
  for (int i = 0; i < size; i++)
  {
    std::cout << "Array at  " << i << " : " << array[i] << std::endl;
  }
}

// {00, 01, 02, 03},
// {10, 11, 12, 13},
// {20, 21, 22, 23},
// {30, 31, 32, 33},

int main()
{
  int array[size];
  int matrix[size][size] = {
      {0, 3, 2, 3},
      {4, 7, 6, 7},
      {2, 6, 6, 2},
      {1, 8, 9, 9},
  };

  setArrayFromMatrix(array, matrix);
  printArray(array);

  return 0;
}