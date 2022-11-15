#pragma once
#include <string>

using namespace std;

struct Person
{
	string name;
	int age;
	float salary;

	string toString() {
		return "{ name: " + name
			+ ", age: " + to_string(age)
			+ ", salary: " + to_string(salary) + "}";
	}
};


void simplePerson();
void pointersToStructure();
void arrayOfPersonsSample();
