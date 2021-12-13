#include "student.h"

class List
{
private:
	int size;
	Student *head;

public:
	List();
	void pop();
	void shift();
	void print();
	void printSize();
	void remove(int index);
	void push(Student *newOne);
	void unshift(Student *newOne);
	void insert(Student *newOne, int index);
	void printStudentInfo(Student *student);
	void swap(Student *firstStudent, Student *secondStudent);
};