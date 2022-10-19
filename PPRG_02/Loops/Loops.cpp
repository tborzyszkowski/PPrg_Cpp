#include <iostream>
using std::cout;
using std::endl;


int main()
{
	//// Suma 1 .. N
	//// 
	//const int N = 10;

	//int result(0);

	//for (int i = 0; i < N; i++) {
	//	result += i;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;


	//// Suma 1 .. N
	//// wersja z pêtl¹ while
	////
	//const int N = 10;

	//int result(0);
	//int i(0);

	//while (i < N) {
	//	result += i;
	//	i++;
	//}

	//cout << "Suma 1 .. " << N << " = " << result << endl;

	// Suma 1 .. N
	// wersja z pêtl¹ do while
	//
	const int N = 10;

	int result(0);
	int i(0);

	do {
		result += i;
		i++;
	} while (i < N);

	cout << "Suma 1 .. " << N << " = " << result << endl;
}

