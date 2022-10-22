#include <iostream>
#include <chrono>

using std::cout;
using std::endl;
using namespace std::chrono;

int fib1(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fib1(n - 2) + fib1(n - 1);
}

long long int fib2(int n) {
    long long int fib0 = 0, fib1 = 1, pom = 0;
    for (int i = 1; i < n; i++) {
        pom = fib0 + fib1;
        fib0 = fib1;
        fib1 = pom;
    }
    return fib1;
}

int main()
{
    const int N = 500;
    long long fib1val = 0;
    long long fib2val = 0;

    for (int i = 2; i < N; i++) {
        auto begin = std::chrono::high_resolution_clock::now();
        fib1val = fib1(i);
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        cout << "Fib(" << i << ") = " << fib1val << " time: " << elapsed.count();
        begin = std::chrono::high_resolution_clock::now();
        fib2val = fib2(i);
        end = std::chrono::high_resolution_clock::now();
        elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        cout << " " << fib2(i) << " time: " << elapsed.count() << endl;
    }
}

