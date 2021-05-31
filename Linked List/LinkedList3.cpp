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

// istream& an ostream& means returning by reference


/*
we are doing here cascading of operator
if we write void instead of ostream& in the return type of above function then 
we cannot do cout<<head<<head2; because 'cout<<head' will return void. So, after doing ostream& 'cout<<head' will return cout object.


Same is the case with cin>>head>>head2
*/

int main(){
	node*head;
	node*head2;
	
	cin>>head>>head2;
	
	cout<<head<<head2;
	
	return 0;
}
