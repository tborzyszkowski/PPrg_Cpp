#include <iostream>

#include "Array2D.h"
#include "Arrays.h"

using namespace std;

void array2DDeclaration() {
	//int x[3][4];
	//for (int row = 0; row < 3; ++row) {
	//	printArray(x[row], 4);
	//	cout << endl;
	//}
	//int x[2][3] = { {2, 4, 5}, {9, 0, 19} };
	//for (int row = 0; row < 2; ++row) {
	//		printArray(x[row], 3);
	//		cout << endl;
	//	}
	int** x = new int* [3];
	for (int i = 0; i < 3; ++i) {
		x[i] = new int[4];
		for (int j = 0; j < 4; ++j)
			x[i][j] = 2 * i + j;
	}
	print2DArray(x, 3, 4);
}

void matrixMultiplication(int** result, int** m1, int** m2, int dimention) {
	for(int i = 0; i < dimention; ++i)
		for (int j = 0; j < dimention; ++j) {
			result[i][j] = 0;
			for (int k = 0; k < dimention; ++k)
				result[i][j] += m1[i][k] * m2[k][j];
		}
}

void matrixProcessing() {
	const int N = 2;
	// create
	int** result = new int* [N];
	for (int i = 0; i < N; ++i) result[i] = new int[N];

	int** m1 = new int* [N];
	for (int i = 0; i < N; ++i) m1[i] = new int[N];

	int** m2 = new int* [N];
	for (int i = 0; i < N; ++i) m2[i] = new int[N];

	// initialize
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			result[i][j] = 0;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			m1[i][j] = i + j + 1;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			m2[i][j] = i + j + 2;

	cout << "m1: " << endl;
	print2DArray(m1, N, N);
	cout << "m2: " << endl;
	print2DArray(m2, N, N);

	matrixMultiplication(result, m1, m2, N);

	cout << "result: " << endl;
	print2DArray(result, N, N);

}

void print2DArray(int** array2D, int numberOfRows, int numberOfColumns) {
	for (int row = 0; row < numberOfRows; ++row) {
		printArray(array2D[row], numberOfColumns);
		cout << endl;
	}
}