#include <iostream>
#include <cmath>
using namespace std;

void greet() 
{
	cout << "Hello World!\n";
}

void displayNum(int n1, double n2) {
	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
}

int add(int a, int b)
{
	return a + b;
}

// function prototype
int mult(int a, int b);

int main()
{
	//greet();
	//greet();

	//int num1 = 1;
	//float num2 = 2.5f;
	//displayNum(num1, num2);
	//displayNum(33, 3.14159f);
	//displayNum(33, 1.12345678901234567890123456789);
	//cout << 1.12345678901234567890123456789 << endl;

	//cout << add(1, 2) << endl;
	//for (int i = 1; i < 10; i++)
	//{
	//	cout << add(i * 10, i) << endl;
	//}

	//cout << mult(6, 7) << endl;
	//cout << add(mult(2, 3), add(4, 5)) << endl;

	int p1x = 1, p1y = 1;
	int p2x = 1, p2y = 2;
	cout << sqrt((p2x - p1x) * (p2x - p1x) + (p2y - p1y) * (p2y - p1y)) << endl;
}

int mult(int a, int b)
{
	return a * b;
}
