#include <iostream>
#include <string>

#include "BinaryTree.h"

using namespace std;

struct BinaryTree {
	int data;

	BinaryTree* left;
	BinaryTree* right;

	string toStringPreorder(BinaryTree* tree) {
		string result = "";
		if (tree == nullptr)
			result = "-";
		else {
			result += to_string(tree->data) + " " +
				toStringPreorder(tree->left) + " " +
				toStringPreorder(tree->right);
		}
		return result;
	}
	string toStringInorder(BinaryTree* tree) {
		string result = "";
		if (tree == nullptr)
			result = "-";
		else {
			result += toStringInorder(tree->left) + " " +
				to_string(tree->data) + " " +
				toStringInorder(tree->right);
		}
		return result;
	}
	string toStringPostorder(BinaryTree* tree) {
		string result = "";
		if (tree == nullptr)
			result = "-";
		else {
			result += toStringPostorder(tree->left) + " " +
				toStringPostorder(tree->right)+ " " +
				to_string(tree->data);
		}
		return result;
	}
};

BinaryTree* deleteTree(BinaryTree* tree) {
	 BinaryTree* result = tree;
	 if (result->left != nullptr) {
		deleteTree(result->left);
		result->left = nullptr;
	}
	if (result->right != nullptr) {
		deleteTree(result->right);
		tree->right = nullptr;
	}
	delete result;
	result = nullptr;
	return result;
}

void binaryTreeSample() {
	BinaryTree* root = 
		new BinaryTree{ 5, 
			new BinaryTree {3, nullptr, nullptr},
			new BinaryTree {7, nullptr, nullptr}
		};

	cout << root->toStringPreorder(root) << endl;
	cout << root->toStringInorder(root) << endl;
	cout << root->toStringPostorder(root) << endl;

	root = deleteTree(root);
	cout << root->toStringPreorder(root) << endl;

}