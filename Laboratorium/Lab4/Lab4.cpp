#include <iostream>
#include "Point.h"

int main()
{
	Point p1{ 1, 1 };
	Point p2{ 2, 2 };

	cout << p1.toString() << endl;
	cout << odleglosc(p1, p2) << endl;

	const int N = 5;
	Point tabOfPoints[N];

	srand((unsigned)time(NULL));
	for (int i = 0; i < N; ++i) {
		tabOfPoints[i].x = rand() % 100;
		tabOfPoints[i].y = rand() % 100;
	}
	printArrayOfPoints(tabOfPoints, N);

	return 0;
}
