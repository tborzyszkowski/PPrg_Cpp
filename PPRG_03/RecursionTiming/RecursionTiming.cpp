#include <iostream>
#include <chrono>

#include "Factorial.h"
#include "Sums.h"
#include "Fibonacci.h"

using namespace std;

int main()
{
	const int iteration_start = 36, iteration_end = 45;
	long long value1 = 0, value2 = 0;

	//auto function1 = sumIterative;
	//auto function2 = sumRecursive;

	//auto function1 = factorialIterative;
	//auto function2 = factorialRecursive;

	auto function1 = fibonacciIterative;
	auto function2 = fibonacciRecursive;

	for (int i = iteration_start; i < iteration_end; i++) {
		auto begin = chrono::high_resolution_clock::now();
		value1 = function1(i);
		auto end = chrono::high_resolution_clock::now();
		auto elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

		cout << "Iter(" << i << ") = " << value1;
		cout << " time: " << elapsed.count() << " s";

		cout << endl;

		begin = chrono::high_resolution_clock::now();
		value2 = function2(i);
		end = chrono::high_resolution_clock::now();
		elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

		cout << " Rec(" << i << ") = " << value2;
		cout << " time: " << elapsed.count() << " s" << endl;
	}
	cout << "Val 1: " << value1 << endl;
	cout << "Val 2: " << value2 << endl;

}
