#include <iostream>
#include "student.h"

int main()
{
  Student *anna = new Student(20);

  std::cout << "Student age: " << anna->age << std::endl;

  return 0;
}