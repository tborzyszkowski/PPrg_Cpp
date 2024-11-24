#include <iostream>
using namespace std;

long long factorial(long long n);
long long factorialOverflow(long long n);

int main()
{
	int n = 50;

	//cout << "factorial(" << n << ") = " << factorial(n) << endl;
	cout << "factorialOverflow(" << n << ") = " << factorialOverflow(n) << endl;
}

long long  factorial(long long  n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}
long long factorialOverflow(long long n)
{
	long long result = 1;
	for(int i = 2; i <=n; i++)
	{
		if (LLONG_MAX / i >= result )
			result *= i;
		else
			return -1;
	}
	return result;
}