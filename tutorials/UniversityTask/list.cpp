#include "list.h"

// Constructor
List::List() : head(0),
							 size(0)
{
}

void List::unshift(Student *newOne)
{
	// If head is null set newOne to head
	// else set newOne next item to head,
	// and make newOne head element
	if (head == NULL)
	{
		head = newOne;
	}
	else
	{
		newOne->next = head;
		head = newOne;
	}

	// Increase size
	size++;
}

void List::push(Student *newOne)
{
	// If head is null set newOne to head
	// else find last element
	// and set its next item to newOne,
	if (head == NULL)
	{
		head = newOne;

		// Increase size
		size++;

		return;
	}

	Student *curr = head;
	while (curr && curr->next)
	{
		curr = curr->next;
	}

	curr->next = newOne;

	// Increase size
	size++;
}

void List::shift()
{
	// If head is null return
	// else set head to heads next item
	if (head == NULL)
	{
		std::cout << "List is empty" << std::endl;

		return;
	}

	Student *temp = head;

	head = temp->next;
	delete temp;

	// Decrease size
	size--;
}

void List::pop()
{
	// If head is null return
	// else if list size is 1 than remove head
	// else find second last element
	// and remove its next item (last element)
	if (head == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}

	if (head->next == NULL)
	{
		head = NULL;
		delete head;
		size--;

		return;
	}

	Student *second_last = head;
	while (second_last->next->next != NULL)
	{
		second_last = second_last->next;
	}

	delete (second_last->next);

	second_last->next = NULL;

	// Decrease size
	size--;
}

void List::insert(Student *newOne, int index)
{
	// If given index is less than 0 return
	// If index is 0 than shift heads item and
	// set newOne to head
	// else try to find item at index
	// if so set newOne to index position
	// else return (not item before given index)

	if (index < 0)
	{
		std::cout << "Invalid position" << std::endl;
		return;
	}

	if (index == 0)
	{
		newOne->next = head;
		head = newOne;

		size++;
	}
	else
	{
		Student *temp = head;
		for (int i = 0; i < index - 1; i++)
		{
			if (temp != NULL)
			{
				temp = temp->next;
			}
		}

		if (temp != NULL)
		{
			newOne->next = temp->next;
			temp->next = newOne;

			size++;
		}
		else
		{
			std::cout << "Previous node is null" << std::endl;
		}
	}
}

void List::remove(int index)
{
	// If list is empty return
	// If given index is less than 0 return
	// If given index is 0, set head to head next item and remove it
	// else try to find item ad given index
	// if so delete it else return (no such node)

	if (head == NULL)
	{
		std::cout << "List is empty" << std::endl;

		return;
	}

	if (index < 0)
	{
		std::cout << "Invalid position" << std::endl;

		return;
	}

	Student *temp = head;

	if (index == 0)
	{
		head = temp->next;
		delete temp;
		size--;

		return;
	}

	for (int i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
	{
		std::cout << "No such node" << std::endl;

		return;
	}

	Student *next = temp->next->next;
	delete (temp->next);
	temp->next = next;
	size--;
}

void List::swap(Student *firstStudent, Student *secondStudent)
{
	Student *temp = new Student("Unknown", "Unknown", 0, 0, 0);

	temp->name = firstStudent->name;
	temp->lastName = firstStudent->lastName;
	temp->points = firstStudent->points;
	temp->absences = firstStudent->absences;
	temp->reprimands = firstStudent->reprimands;

	firstStudent->name = secondStudent->name;
	firstStudent->lastName = secondStudent->lastName;
	firstStudent->points = secondStudent->points;
	firstStudent->absences = secondStudent->absences;
	firstStudent->reprimands = secondStudent->reprimands;

	secondStudent->name = temp->name;
	secondStudent->lastName = temp->lastName;
	secondStudent->points = temp->points;
	secondStudent->absences = temp->absences;
	secondStudent->reprimands = temp->reprimands;

	delete temp;
}

void List::printSize()
{
	std::cout << "List size: " << size << std::endl;
}

void List::print()
{
	if (head == NULL)
	{
		std::cout << "List is empty" << std::endl;

		return;
	}

	Student *tp = head;

	while (tp != 0)
	{
		std::cout << *tp << std::endl;
		tp = tp->next;
	}
}

void List::printStudentInfo(Student *student)
{
	std::cout << *student << std::endl;
}