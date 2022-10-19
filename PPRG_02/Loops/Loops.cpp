#include <iostream>
using std::cout;
using std::endl;


int main()
{
	const int N = 10;

	int result(0);

	for (int i = 0; i < N; i++) {
		result += i;
	}

	cout << "Suma 1 .. " << N << " = " << result << endl;

}

