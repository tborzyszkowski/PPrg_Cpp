long long fibonacciIterative(int n)
{
	long long int fib0 = 0, fib1 = 1, pom = 0;
	for (int i = 1; i < n; i++) {
		pom = fib0 + fib1;
		fib0 = fib1;
		fib1 = pom;
	}
	return fib1;
}

long long fibonacciRecursive(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacciRecursive(n - 2) + fibonacciRecursive(n - 1);
}