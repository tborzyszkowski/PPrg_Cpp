#include <iostream>
#include "HeapAndStack.h"

using namespace std;

int hello() {
	int a = 100;
	return a;
}

void stack() {
	int a;
	int b = -3;
	int c = 12345;
	int* p = &b;
	int d = hello();

	Cube cube{ 20 };
	Cube* cubeP = &cube;
}

void heap(){
	int *p = new int;
	Cube* c1 = new Cube();
	Cube* c2 = c1;

	double v = c1->getVolume();
	delete c1;
	delete p;
	c1 = nullptr;
	c2 = nullptr;
	p = nullptr;
}

void deleteArray() {
	const int N = 5;
	float* ptr = new float[N];

	for (int i = 0; i < N; ++i)
		*(ptr + i) = i + 1;

	for (int i = 0; i < N; ++i)
		cout << "ptr: " << i << " : " << *(ptr + i) << endl;

	delete[] ptr;
}
