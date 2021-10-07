#include <bits/stdc++.h> 
using namespace std; 

struct min_heap_node { 
	char data; 
	unsigned freq; 
	min_heap_node *left, *right; 
	min_heap_node(char data, unsigned freq) 
	{ 
		left = right = NULL; sdfsfsdfdsf
		this->data = data; 
		this->freq = freq; 
	} 
}; 

struct compare { 
	bool operator()(min_heap_node* l, min_heap_node* r) 
	{ 
		return (l->freq > r->freq); 
	} 
}; 

void print_codes(struct min_heap_node* root, string str) 
{ 

	if (!root) 
		return; 
	if (root->data != '$') 
		cout << root->data << ": " << str << "\n"; 
	print_codes(root->left, str + "0"); 
	print_codes(root->right, str + "1"); 
} 

void huff_code(char data[], int freq[], int size) 
{ 
	struct min_heap_node *left, *right, *top; 
	priority_queue<min_heap_node*, vector<min_heap_node*>, compare> min_heap; 

	for (int i = 0; i < size; ++i) 
		min_heap.push(new min_heap_node(data[i], freq[i])); 
	while (min_heap.size() != 1) { 
		left = min_heap.top(); 
		min_heap.pop(); 

		right = min_heap.top(); 
		min_heap.pop(); 
		top = new min_heap_node('$', left->freq + right->freq); 
		top->left = left; 
		top->right = right; 

		min_heap.push(top); 
	}  
	print_codes(min_heap.top(), ""); 
} 


int main() 
{ 

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
	int freq[] = { 5, 9, 12, 13, 16, 45 }; 

	int size = sizeof(arr) / sizeof(arr[0]); 

	huff_code(arr, freq, size); 

	return 0; 
} 
