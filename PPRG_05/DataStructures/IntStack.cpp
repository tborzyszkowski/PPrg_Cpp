#include <iostream>
#include "LinkedList.h"
#include "IntStack.h"
#include <string>

using namespace std;

struct IntStack {
	Node* stackData;

	void push(int value) {
		stackData = addHead(stackData, value);
	}

	int pop() {
		int result = 0;
		if (stackData != nullptr) {
			result = stackData->data;
			stackData = deleteHead(stackData);
		}
		else {
			cerr << "pop(): no data" << endl;
		}
		return result;
	}

	string toString() {
		return listToString(stackData);
	}
};

void intStackSample() {
	IntStack stack{ nullptr };
	cout << stack.toString() << endl;

	for (int i = 0; i < 5; ++i)
		stack.push((i + 1) * (i + 2));
	cout << "after push: " << stack.toString() << endl;

	cout << "stack pop: " << stack.pop() << " ";
	cout << stack.pop() << endl;
	cout << "after pop: " << stack.toString() << endl;

}