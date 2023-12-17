long long sumIterative(int n)
{
	long long result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	return result;
}

long long sumRecursive(int n)
{
	if (n == 0)
		return 0;
	else
		return n + sumRecursive(n - 1);
}