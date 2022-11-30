#include <iostream>
#include "Pointers.h"

using namespace std;

void simplePointers() {
	int var = 5;

	// declare pointer variable
	int* pointVar;

	// store address of var
	pointVar = &var;

	// print value of var
	cout << "var = " << var << endl;

	// print address of var
	cout << "&var = " << &var << endl;

	// print pointer pointVar
	cout << "pointVar = " << pointVar << endl;

	// print the content of the address pointVar points to
	cout << "(*pointVar) = " << *pointVar << endl;

	// change value at address pointVar
	*pointVar = 1;
	cout << "after change var = " << var << endl;

	// change value of var
	var = 7;
	cout << "after change *pointVar = " << *pointVar << endl;
}

void pointersToArray() {
	int arr[5] = { 10, 11, 12, 13, 14 };
	int* ptr = nullptr;

	ptr = arr;
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << ": " << ((ptr + i) == &arr[i]) << " ";
		cout << (ptr + i) << " ";
		cout << *(ptr + i) << " " << *(arr + i) << endl;
	}
}