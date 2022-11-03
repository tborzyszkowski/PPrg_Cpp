#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
	int n = 5;

	cout << "factorial(" << n << ") = " << factorial(n) << endl;
}

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}