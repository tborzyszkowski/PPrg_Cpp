
#include <iostream>
#include "Fibonacci.h"

int main()
{
    const int iteration_start = 10, iteration_end = 20;

    for (int i = iteration_start; i < iteration_end; i++) {
        initCounter();
        fibonacciIterative(i);
        std::cout << "Iter: " << i << " counter: "<< getCounter() << std::endl;
        initCounter();
        fibonacciRecursive(i);
        std::cout << "Rek:  " << i << " counter: " << getCounter() << std::endl;
    }
}
