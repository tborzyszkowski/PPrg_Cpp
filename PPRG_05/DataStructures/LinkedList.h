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
Node* createNode(int data);
string listToString(Node* list);
Node* addHead(Node* list, int data);
Node* deleteHead(Node* list);