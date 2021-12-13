#include "student.h"

Student::Student(std::string name, std::string lastName, int points, int absences, int reprimands) : name(name),
																																																		 lastName(lastName),
																																																		 points(points),
																																																		 absences(absences),
																																																		 reprimands(reprimands),
																																																		 next(0)
{
}

std::ostream &operator<<(std::ostream &os, const Student &student)
{
	return os << "Name: " << student.name
						<< ", Last Name: " << student.lastName
						<< ", Points: " << student.points
						<< ", Absences: " << student.absences
						<< ", Reprimands: " << student.reprimands;
}