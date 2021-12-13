#include <iostream>

int main()
{
  const int n = 4;

  int arr[n] = {1, 1, 1, 1};

  int matrix[n][n] = {
      {0, 3, 2, 3},
      {4, 7, 6, 7},
      {2, 6, 6, 2},
      {1, 8, 9, 9},
  };

  for (int i = 0; i < n; i++)
  {
    int indexOfMax = 0;
    int max = matrix[i][0];

    for (int j = 1; j < n; j++)
    {
      if (matrix[i][j] >= max)
      {
        indexOfMax = j;
        max = matrix[i][j];
      }
    }

    std::cout << "max : " << max << ", indexOfMax: " << indexOfMax << std::endl;

    for (int k = 0; k < indexOfMax; k++)
    {
      arr[i] *= matrix[i][k];
    }
  }

  for (int i = 0; i < n; i++)
  {
    std::cout << "arr item at " << i << " : " << arr[i] << std::endl;
  }

  return 0;
}