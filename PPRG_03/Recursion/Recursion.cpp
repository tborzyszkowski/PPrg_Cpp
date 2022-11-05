#include <iostream>
using namespace std;

long long factorial(long long n);

int main()
{
	int n = 5;

	cout << "factorial(" << n << ") = " << factorial(n) << endl;
}

long long  factorial(long long  n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}