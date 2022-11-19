#include <iostream>
#include<cstdlib>

#include "Arrays.h"

using namespace std;

void arrayDeclaration() {
	const int columns = 6;
	unsigned int x[columns];

	printArrayU(x, columns);
}

void arrayInitialization() {
	const int columns = 6;
	//int x[] = { 19, 10, 8, 17, 9, 15 };
	// empty members case
	int x[6] = { 11, 32, 53 };
	printArray(x, columns);
}

int arraySum(int oneDArray[], int numberOfColumns) {
	int result = 0;
	for (int i = 0; i < numberOfColumns; ++i)
		result += oneDArray[i];
	return result;
}

int arrayMax(int oneDArray[], int numberOfColumns) {
	int maxElem = oneDArray[0];
	for (int i = 1; i < numberOfColumns; ++i)
		if (maxElem < oneDArray[i])
			maxElem = oneDArray[i];
	return maxElem;
}

//
// wizualizacje algorytmów: https://www.cs.usfca.edu/~galles/visualization/Algorithms.html
//
void swap(int oneDArray[], int i, int j) {
	int pom = oneDArray[i];
	oneDArray[i] = oneDArray[j];
	oneDArray[j] = pom;
}

void bubbleSort(int oneDArray[], int numberOfColumns) {
	for (int i = 0; i < numberOfColumns; i++)
		for (int j = 0; j < numberOfColumns - i - 1; j++)
			if (oneDArray[j] > oneDArray[j + 1])
				swap(oneDArray, j, j + 1);
}

void randomInit(int oneDArray[], int numberOfColumns, int offset, int range) {
	// Providing a seed value
	srand((unsigned)time(NULL));
	for (int i = 0; i < numberOfColumns; ++i)
		oneDArray[i] = offset + (rand() % range);
}

void arrayProcessing() {
	const int columns = 100 * 100;
	int x[columns];

	// initialization
	//for (int i = 0; i < columns; ++i)
	//	x[i] = i + 1;
	// random initialization
	randomInit(x, columns, 0, 100);

	cout << "Array sum: " << arraySum(x, columns) << endl;
	cout << "Array max: " << arrayMax(x, columns) << endl;
	//printArray(x, columns);
	cout << endl;
	bubbleSort(x, columns);
	//printArray(x, columns);
}

void printArray(int oneDArray[], int numberOfColumns) {
	for (int i = 0; i < numberOfColumns; ++i) {
		cout << oneDArray[i] << " ";
	}
}
void printArrayU(unsigned int oneDArray[], int numberOfColumns) {
	for (int i = 0; i < numberOfColumns; ++i) {
		cout << oneDArray[i] << " ";
	}
}
