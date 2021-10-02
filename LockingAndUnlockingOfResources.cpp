#include <bits/stdc++.h>
using namespace std;

class narytree {
public:
	bool isLock;
	bool isLockable;
	narytree* parent;
	vector<narytree*> children;
	narytree()
	{
		isLock = false;
		isLockable = true;
		parent = NULL;
	}
	narytree(narytree* parent)
	{
		isLock = false;
		isLockable = true;
		this->parent = parent;
	}
};

bool isLock(narytree* node) { return node->isLock; }

void Lock(narytree* node)
{
	if (node->isLockable == false)
		return;

	narytree* T = node;
	bool flag = false;
	while (T != NULL) {
		if (T->isLock == true) {
			flag = true;
			break;
		}
		T = T->parent;
	}
	if (flag)
		return;
	else {
		node->isLock = true;
		T = node;
		// marking isLockable as false for ancestor nodes.
		while (T != NULL) {
			T->isLockable = false;
			T = T->parent;
		}
	}
}

void unLock(narytree* node)
{
	if (node->isLock == false)
		return;
	narytree* T = node;
	node->isLock = false;
	// marking isLoackable as true for ancestor nodes.
	while (T != NULL) {
		T->isLockable = true;
		T = T->parent;
	}
}

int main()
{
	// Creating N-Array Tree
	narytree* root = new narytree();

	narytree* t1 = new narytree(root);
	narytree* t2 = new narytree(root);
	narytree* t3 = new narytree(root);

	root->children.push_back(t1);
	root->children.push_back(t2);
	root->children.push_back(t3);

	narytree* t5 = new narytree(root->children[0]);
	root->children[0]->children.push_back(t5);
	narytree* t4 = new narytree(root->children[1]);
	root->children[1]->children.push_back(t4);

	// Locking t4 node.
	Lock(t4);
	// Checking if the t4 node is locked.
	cout << "t4 node is locked:"
		<< ((isLock(t4) == true) ? "true" : "false")
		<< "\n";
	Lock(t2);
	cout << "t2 node is locked:"
		<< ((isLock(t2) == true) ? "true" : "false")
		<< "\n";
	// Unlocking t4 node.
	unLock(t4);
	// Now we should be able to lock the tree.
	Lock(t2);
	cout << "t2 node is locked:"
		<< ((isLock(t2) == true) ? "true" : "false");

	return 0;
}
