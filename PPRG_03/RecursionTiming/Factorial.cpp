long long factorialIterative(int n)
{
	long long result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

long long factorialRecursive(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorialRecursive(n - 1);
}