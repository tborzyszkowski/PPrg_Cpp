#include <iostream>
#include "LinkedList.h"

using namespace std;

Node* createNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;
	return newNode;
}

Node* addHead(Node* list, int data) {
	Node* newNode = createNode(data);
	newNode->next = list;
	return newNode;
}

Node* addEnd(Node* list, int data) {
	Node* newNode = createNode(data);
	Node* lastNode = list;
	if (list == nullptr)
		return newNode;
	else {
		while (lastNode->next != nullptr)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		return list;
	}
}

Node* deleteHead(Node* list) {
	Node* pom = (list == nullptr) ? nullptr : list->next;
	delete list;
	return pom;
}

Node* deleteList(Node* list) {
	Node* pom = list;
	while (pom != nullptr)
		pom = deleteHead(pom);
	return pom;
}

string listToString(Node* list) {
	Node* pom = list;
	string result = (pom == nullptr) ? "NULL" : "";
	while (pom != nullptr) {
		result += pom->toString();
		pom = pom->next;
	}
	return result;
}

void linkedListSample() {
	Node* head = nullptr;
	
	cout << listToString(head) << endl;

	for (int i = 0; i < 5; ++i) 
		head = addHead(head, i);
	cout << listToString(head) << endl;

	head = deleteHead(head);
	cout << listToString(head) << endl;

	head = deleteList(head);
	cout << listToString(head) << endl;

	for (int i = 0; i < 5; ++i) 
		head = addEnd(head, i);
	cout << listToString(head) << endl;

	head = deleteList(head);
	cout << listToString(head) << endl;

}