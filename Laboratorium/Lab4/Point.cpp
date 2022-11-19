#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

double odleglosc(Point p1, Point p2) {
	double dx = p1.x - p2.x;
	double dy = p1.y - p2.y;

	return sqrt(dx *dx + dy * dy);
}

void printArrayOfPoints(Point arrayOfPoints[], int numberOfPoints) {
	for (int i = 0; i < numberOfPoints; ++i) {
		cout << arrayOfPoints[i].toString() << endl;
	}
}