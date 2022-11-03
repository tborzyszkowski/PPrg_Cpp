#include <iostream>
#include "Person.h"
#include "MyMath.h"

int main()
{
	cout << greeting("Jan") << endl;

	for (int i = 1; i < 20; i++)
		cout << "fib(" << i << ") = " << fibonacci(i) << endl;
}
