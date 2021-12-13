#include <iostream>
#include "list.h"

int main()
{
	List *linkedList = new List();
	Student *firstStudent = new Student("Bob", "Jackson", 10, 0, 0);
	Student *secondStudent = new Student("Tom", "Davidson", 4, 3, 2);
	Student *thirdStudent = new Student("Alex", "Smith", 5, 1, 0);
	Student *fourthStudent = new Student("David", "Jonson", 10, 0, 0);

	std::cout << "Initialization" << std::endl;
	linkedList->push(firstStudent);
	linkedList->insert(secondStudent, 1);
	linkedList->unshift(thirdStudent);
	linkedList->push(fourthStudent);
	linkedList->print();

	std::cout << "Swapping" << std::endl;
	linkedList->swap(secondStudent, thirdStudent);
	linkedList->print();

	std::cout << "Remove from head" << std::endl;
	linkedList->shift();
	linkedList->print();

	std::cout << "Remove from end" << std::endl;
	linkedList->pop();
	linkedList->print();

	std::cout << "Print concrete student info" << std::endl;
	linkedList->printStudentInfo(firstStudent);
	linkedList->printSize();

	return 0;
}