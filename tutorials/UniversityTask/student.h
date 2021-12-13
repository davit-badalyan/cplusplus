#include <iostream>
#include <string>

class Student
{
private:
	friend std::ostream &operator<<(std::ostream &os, const Student &student);

public:
	int points;
	int absences;
	Student *next;
	int reprimands;
	std::string name;
	std::string lastName;

	Student();
	Student(std::string name = "Unknown", std::string lastName = "Unknown", int points = 0, int absences = 0, int reprimands = 0);
};