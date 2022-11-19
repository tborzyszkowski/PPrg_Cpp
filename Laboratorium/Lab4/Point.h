#pragma once
#include <string>

using namespace std;

struct Point
{
	int x;
	int y;

	//Point(int x, int y) : x{ x }, y{ y } {};

	string toString() {
		return "{ x: " + to_string(x) + ", y: " + to_string(y)+ "}";
	}
};

double odleglosc(Point p1, Point p2);
void printArrayOfPoints(Point arrayOfPoints[], int numberOfPoints);