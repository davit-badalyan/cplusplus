#include <iostream>

int main()
{
  const int n = 4;

  int arr[n];
  int compareValue = 5;
  int matrix[n][n] = {
      {0, 3, 2, 3},
      {4, 7, 6, 7},
      {2, 6, 6, 2},
      {1, 8, 9, 9},
  };

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    int multiply = 1;

    int max = matrix[i][0];

    for (int j = 1; j < n; j++)
    {
      if (matrix[i][j] >= max)
      {
        max = matrix[i][j];
      }
    }

    std::cout << "max : " << max << std::endl;

    for (int k = 0; k < n; k++)
    {
      sum += matrix[i][k];
      multiply *= matrix[i][k];
    }

    if (max > compareValue)
    {
      arr[i] = sum;
    }
    else
    {
      arr[i] = multiply;
    }
  }

  for (int i = 0; i < n; i++)
  {
    std::cout << "arr item at " << i << " : " << arr[i] << std::endl;
  }

  return 0;
}