// C++ program to find the vertical sum in a given binary search tree

#include <bits/stdc++.h>

using namespace std;

struct Tree

{

int element;

struct Tree *left;

struct Tree *right;

};

typedef struct Tree* TREE;

TREE create_tnode(int element, TREE left, TREE right) {

TREE tree = (TREE) malloc(sizeof(struct Tree));

tree->element = element;

tree->left = left;

tree->right = right;

return tree;

}

TREE insert_tree(TREE tree, int element) {

if(tree == NULL){

return create_tnode(element, NULL, NULL);

} else if(element > tree->element){

tree->right = insert_tree(tree->right, element);

} else if(element < tree->element) {

tree->left = insert_tree(tree->left, element);

} else {

// Duplicate, Do nothing

}

return tree;

}

TREE destroy_tree(TREE tree) {

if(tree != NULL){

destroy_tree(tree->left);

destroy_tree(tree->right);

free(tree);

}

return NULL;

}

struct List {

int element;

struct List *next;

struct List *prev;

};

typedef struct List* LIST;

LIST create_node(int element, LIST next, LIST prev) {

LIST list = (LIST) malloc(sizeof(struct List));

list->element = element;

list->next = next;

list->prev = prev;

return list;

}

void vsum_list(TREE tree, LIST node) {

if(tree == NULL){

return;

}

node->element += tree->element;

if(tree->left){

if(node->prev == NULL){

node->prev = create_node(0, node, NULL);

}

vsum_list(tree->left, node->prev);

}

if(tree->right){

if(node->next == NULL){

node->next = create_node(0, NULL, node);

}

vsum_list(tree->right, node->next);

}

}

// TODO: Implement the following function

void vsum(TREE tree)

{

LIST c = NULL;

LIST sums = create_node(0, NULL, NULL);

vsum_list(tree, sums);

while(sums->prev != NULL){

sums = sums->prev;

}

while(sums != NULL){

cout << sums->element << ” “;

sums = sums->next;

}

cout << endl;

}

void print_infix(TREE tree){

if(tree == NULL){

return;

}

print_infix(tree->left);

cout << tree->element << ” “;

print_infix(tree->right);

}

int main()

{

int n;

int x, i;

char command[10];

TREE tree = NULL;

cout << “nEnter the number of elements of the tree : “;

cin >> n;

cout << “nInput the tree elements : “;

for (i = 0; i < n; i++)

{

cin >> x;

tree = insert_tree(tree, x);

}

cout << “nVertical sum : “;

vsum(tree);

tree = destroy_tree(tree);

return 0;

}