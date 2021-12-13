#include <iostream>

int function(int x, int y, int z)
{
  int result = !(((!(x ^ (y & z))) == x) ^ ((y & z) ? x : 1));
  std::cout << "Function result at x = " << x << ", y = " << y << ", z = " << z << " equals to " << result << std::endl;
  return result;
}

// Throught Deduction normal form
int functionFirstAlternative(int x, int y, int z)
{
  int result = (x & y & z);
  std::cout << "Function result at x = " << x << ", y = " << y << ", z = " << z << " equals to " << result << std::endl;
  return result;
}

// Throught Conjunctive normal form
int functionSecondAlternative(int x, int y, int z)
{
  // int result = !(!x | !y | !z);
  int result = (x | y | z) ^ (x | y | !z) ^ (x | !y | z) ^ (x | !y | !z) ^ (!x | y | z) ^ (!x | y | !z) ^ (!x | !y | z);
  std::cout << "Function result at x = " << x << ", y = " << y << ", z = " << z << " equals to " << result << std::endl;
  return result;
}

int main()
{
  // Defining rows and columns for function with 3 variables
  // 8 possible sequences
  int const rows = 8;
  int const columns = 3;

  // Defining empty vector and matrix with all possible values
  int vector[rows];
  int matrix[rows][columns] = {
      {0, 0, 0},
      {0, 0, 1},
      {0, 1, 0},
      {0, 1, 1},
      {1, 0, 0},
      {1, 0, 1},
      {1, 1, 0},
      {1, 1, 1},
  };

  // Getting vector from function
  for (int i = 0; i < rows; i++)
  {
    int x = matrix[i][0];
    int y = matrix[i][1];
    int z = matrix[i][2];

    vector[i] = function(x, y, z);
  }

  // Getting indexes of last 0 and 1 values from vector
  int lastOneIndex = 0;
  int lastZeroIndex = 0;
  for (int i = 0; i < rows; i++)
  {
    vector[i] == 1 ? lastOneIndex = i : lastZeroIndex = i;
  }

  // Printing Deduction normal form
  std::cout << "\nDeduction normal form: ";
  for (int i = 0; i < rows; i++)
  {
    std::string xChar = matrix[i][0] == 0 ? "!x" : "x";
    std::string yChar = matrix[i][1] == 0 ? "!y" : "y";
    std::string zChar = matrix[i][2] == 0 ? "!z" : "z";

    if (vector[i] == 1)
    {
      std::cout << "(" << xChar << " ^ " << yChar << " ^ " << zChar << ")";

      if (i != lastOneIndex)
      {
        std::cout << " v ";
      }
    }
  }

  // Printing Conjunctive normal form
  std::cout << "\nConjunctive normal form: ";
  for (int i = 0; i < rows; i++)
  {
    std::string xChar = matrix[i][0] == 1 ? "!x" : "x";
    std::string yChar = matrix[i][1] == 1 ? "!y" : "y";
    std::string zChar = matrix[i][2] == 1 ? "!z" : "z";

    if (vector[i] == 0)
    {
      std::cout << "(" << xChar << " v " << yChar << " v " << zChar << ")";

      if (i != lastZeroIndex)
      {
        std::cout << " ^ ";
      }
    }
  }

  return 0;
}