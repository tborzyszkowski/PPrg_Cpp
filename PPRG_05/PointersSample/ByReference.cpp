#include <iostream>
#include "ByReference.h"

using namespace std;


void functionByValue(int num) {
	cout << "By value: in function: before change: " << num << endl;
	num++;
	cout << "By value: in function: after change: " << num << endl;
}

void functionByReference(int &num) {
	cout << "By reference: in function: before change: " << num << endl;
	num++;
	cout << "By reference: in function: after change: " << num << endl;
}
void swap(int& n1, int& n2) {
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void byReference() {
	int byVal = 1;
	int byRef = 1;

	cout << "By value: before function: " << byVal << endl;
	functionByValue(byVal);
	cout << "By value: after function:  " << byVal << endl;

	cout << "By reference: before function: " << byRef << endl;
	functionByReference(byRef);
	cout << "By reference: after function:  " << byRef << endl;

	int a = 1, b = 2;
	cout << "a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	swap(&a, &b);
	cout << "a = " << a << " b = " << b << endl;
}