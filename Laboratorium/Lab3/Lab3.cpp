#include <iostream>
using std::cout;
using std::endl;

bool czySzescian(int n)
{
	bool jest = false;
	int licznik = 1;
	while (licznik <= n && !jest)
	{
		if (licznik * licznik * licznik == n)
			jest = true;
		licznik++;
	}
	return jest;
}

int main()
{
	const int N = 100;
	for (int i = 2; i < N; i++)
		cout << "czySzescian(" << i << ") = " << czySzescian(i) << endl;
}