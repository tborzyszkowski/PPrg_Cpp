#include "Fibonacci.h"

int counter = 0;
void initCounter()
{
	counter = 0;
}
int getCounter()
{
	return counter;
}
void updateCounter(int n)
{
	counter += n;
}
long long fibonacciIterative(int n)
{
	long long int fib0 = 0, fib1 = 1, pom = 0;
	updateCounter(3);
	for (int i = 1; i < n; i++) {
		updateCounter(3);
		pom = fib0 + fib1;
		fib0 = fib1;
		fib1 = pom;
		updateCounter(4);
	}
	return fib1;
}

long long fibonacciRecursive(int n)
{
	updateCounter(3);
	if (n == 0 || n == 1)
		return n;
	else
	{
		updateCounter(5);
		return fibonacciRecursive(n - 2) + fibonacciRecursive(n - 1);
	}
}