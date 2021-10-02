#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;
	
	//constructor
	node(int d){
		data = d;
		next = NULL;
	}
};


void build(){
}

//passing a pointer by reference
void insertAtHead(node*&head, int d){
	if(head==NULL){
		head = new node(d);
		return;
	}
	
	node *n = new node(d);
	n->next = head;
	head = n;
}

int length(node*head){
	int count=0;
	while(head!=NULL){
		count=count+1;
		head = head->next;
	}
	return count;
}

void insertAtTail(node*&head, int data){
	if(head==NULL){
		head = new node(data);
		return;
	}
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	tail->next=new node(data);
	return;
}

void insertAtMiddle(node*&head, int data, int p){
	//corner case
	if(head==NULL or p==0){
		insertAtHead(head,data);
	}
	else if(p>length(head)){
		insertAtTail(head,data);
	}
	else{
		//take p-1 jumps
		int jump=1;
		node*temp=head;
		while(jump<=p-1){
			temp=temp->next;
			jump++;
		}
		//create a new node
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<endl;
}


void deleteHead(node*&head){
	if(head==NULL){
		return;
	}
	node*temp=head->next;
	delete head;
	head=temp;
}

//We will do Linear search
bool search(node*head, int key){
	node*temp=head;
	while(temp!=NULL){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}
	return false;
}

//recursively
bool searchRecursive(node*head, int key){
	if(head==NULL){
		return false;
	}
	//In recursive case: check at head, if it is not present then check in the remaining Linked List
	if(head->data==key){
		return true;
	}
	else{
		return searchRecursive(head->next,key);
	}
}

//We can take input by two typr of functions
/*
void take_input(node*&head){
	
}

//and
*/

node* take_input(){
	int d;
	cin>>d;
	
	node*head = NULL;
	
	while(d!=-1){
		insertAtHead(head,d);
		cin>>d;
	}
	return head;
}

//We want to print entire Linked List by doing cout<<head, for that we need to do some type of operator overloading
ostream& operator<<(ostream &os, node*head){
	print(head);
	return os;
}

//Here we are taking head as a reference because we want to modify original linked list.
istream& operator>>(istream &is, node*&head){
	head = take_input();
	return is;
}


/*
we are doing here cascading of operator
if we write void instead of ostream& in the return type of above function then 
we cannot do cout<<head<<head2; because 'cout<<head' will return void. So, after doing ostream& 'cout<<head' will return cout object.


Same is the case with cin>>head>>haed2
*/


void reverse(node*&head){
	node* C = head;
	node* P = NULL;
	node* N;
	while(C!=NULL){
		//Save the next node
		N=C->next;
		//Make the current node point to previous
		C->next=P;
		
		//Update previous(P) & current(C) then take one step forward
		P=C;
		C=N;
	}
	head=P;
}

node* recReverse(node*head){
	//smallest linked list
	if(head->next==NULL or head==NULL){
		return head;
	}
	//rec case
	node* shead=recReverse(head->next);
	
	node* temp=head->next;
	temp->next=head;
	head->next=NULL;
	return shead;
}


/*
One way to find mid point of linked list is to find the length of linked list and then we can iterate to length/2
but it takes O(n) time. 

So more efficient way to do it is Midpoint runner technique
In this technique we will use two pointer(slow and fast) in which slow pointer will be at head and fast pointer will be at head->next
So fast will move two step and slow will move only one step.
So when fast will not able to move two step ahead then slow will be at the mid of linked list

*/

node* midPoint(node*head){
	if(head==NULL or head->next==NULL){
		return head;
	}
	
	node*slow=head;
	node*fast=head->next;
	
	while(fast!=NULL and fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	
	return slow;
}

/*
To find kth node from end 
1. 1 way is to find length of Linked List then iterate till length-k
2. 2nd way is take two pointer(fast & slow), initially both at head, take fast pointer k-jumps ahead, and slow still at head
after that take 1-1 step each, and when fast will reach NULL than slow will be at kth node from end

*/

node* merge(node*a, node*b){
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	//we take a head pointer
	node*c;
	
	if(a->data < b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(b->next,a);
	}
	return c;
}

/*
MERGE SORT
-Sort an unsorted Linked List
Steps->
1. Take midpint and divide linked list into 2 linked list
2. Recursively sort left and right part
3. Merge Them
*/

node* mergeSort(node*head){
	//base case
	if(head==NULL or head->next==NULL){
		return head;
	}
	
	//recursive case
	//1. break about the midpoint
	
	node* mid=midPoint(head);
	node* a=head;
	node* b=mid->next;
	
	mid->next=NULL;
	
	//2. recursively sort the two parts
	a=mergeSort(a);
	b=mergeSort(b);
	
	//3. merge them
	node*c=merge(a,b);
	
	return c;
}

bool detectCycle(){
	node *slow=head;
	node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}


int main(){
	node*head;

	cin>>head;
	cout<<head;
	
	head=mergeSort(head);
	
	cout<<head;
	
	return 0;
}
