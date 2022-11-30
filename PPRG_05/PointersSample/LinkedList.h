#pragma once
#include <string>

using namespace std;

struct Node {
	int data;
	Node* next;

	string toString() {
		return "{" + to_string(data) + "}";
	}
};


void linkedListSample();