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


int main(){
	node*head = take_input();
	
	print(head);
	/*
	insertAtHead(head, 5);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	insertAtHead(head, 0);
	
	print(head);
	
	insertAtMiddle(head,4,3);
	insertAtTail(head,7);
	
	print(head);
	deleteHead(head);
	
	print(head);
	
	int key;
	cin>>key;
	
	if(searchRecursive(head,key)){
		cout<<"Element Found"<<endl;
	}
	else{
		cout<<"Element Not Found";
	}
	/*
	if(search(head,key)){
		cout<<"Element Found"<<endl;
	}
	else{
		cout<<"Element Not Found";
	}*/
	
	return 0;
}
