#include <iostream>
#include "Person.h"

using namespace std;

void simplePerson() {
	Person p1{ "Jan", 35, 12345 };

	Person p2;
	p2.name = "Hermenegilda";
	p2.age = 30;
	p2.salary = 23456;

	cout << "p1: " << p1.toString() << endl;
	cout << p2.toString() << endl;
}

void pointersToStructure() {
	Person p1{ "Jan", 35, 12345 };
	Person p2 = p1;

	p2.name = "Kazimierz";
	cout << "p1: " << p1.toString() << endl;
	cout << "p2: " << p2.toString() << endl;
	cout << "----" << endl;

	Person* pp1 = &p1;
	pp1->name = "Kazik";
	cout << "p1:  " << p1.toString() << endl;
	cout << "pp1: " << (*pp1).toString() << endl;

}

void fillArrayOfPersons(Person persons[], int numberOfPersons) {
	string names[]
		= { "Anna", "Kazik","Zuza", "Marek", "Jan",
			"Gosia", "Ala", "Kamil", "Anastazja", "Anna" };
	srand((unsigned)time(NULL));
	for (int i = 0; i < numberOfPersons; ++i) {
		persons[i].name = names[rand() % 10];
		persons[i].age = rand() % 50;
		persons[i].salary = 1234 + 101.0 * (rand() % 27);
	}
}

Person getPersonMinAge(Person persons[], int numberOfPersons) {
	int minPersonIndex = 0;
	for (int i = 1; i < numberOfPersons; ++i)
		if (persons[i].age < persons[minPersonIndex].age)
			minPersonIndex = i;
	return persons[minPersonIndex];
}

void arrayOfPersonsSample() {
	const int N = 5;
	Person persons[5];

	fillArrayOfPersons(persons, N);
	for (int i = 0; i < N; ++i)
		cout << persons[i].toString() << endl;

	cout << "Min: " << getPersonMinAge(persons, N).toString() << endl;
}