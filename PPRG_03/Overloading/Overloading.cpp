#include <iostream>
using namespace std;

int absolute(int x)
{
	return (x > 0 ? x : -x);
}
float absolute(float x)
{
	return (x > 0 ? x : -x);
}
double absolute(double x)
{
	return (x > 0 ? x : -x);
}

void display(int x, double y)
{
	cout << "int: " << x << "double: y" << endl;
}
void display(int x, int y)
{
	cout << "int: " << x << "int: y" << endl;
}
void display(double x, double y)
{
	cout << "double: " << x << "double: y" << endl;
}
void display(double x)
{
	cout << "double: " << x << endl;
}
void display(int x)
{
	cout << "int: " << x << endl;
}

int suma(int a, int b, int c = 0, int d = 0);

int suma_fd(int a, int b, float c = 0, double d = 0);

// invalid
//int suma(int a, int b = 1, int c, int d = 0);

int main()
{
	//cout << absolute(-5) << endl;
	//cout << absolute(-1.23f) << endl;
	//cout << absolute(5.678) << endl;

	//display(1);
	//display(2.5);
	//display(1, 2);
	//display(1, 3.0);
	//display(2.0, 3.0);
	////display(2.1f, 4);

	cout << suma(1, 2, 3, 4) << endl;
	cout << suma(1, 2) << endl;
	cout << suma(1, 2, 3) << endl;
// 	cout << suma(1) << endl;
	cout << suma_fd(1, 2, 3) << endl;
//	cout << suma_fd(1, 2,  3.3) << endl;
}

int suma(int a, int b, int c, int d) 
{
	return a + b + c + d;
}

int suma_fd(int a, int b, float c, double d)
{
	return a + b + c + d;
}

