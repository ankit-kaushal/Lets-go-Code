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


node* getNode(node*head,int data){
	node*temp=head;
	while(temp->next!=head){
		if(temp->data==data){
			return temp;
		}
		temp=temp->next;
	}
	//when we are out of the loop, that means data is not yet found but last element is yet not checked
	if(temp->data==data){
		return temp;
	}
	return NULL;
}

void print(node*head){
	node*temp=head;
	while(temp->next!=head){
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<temp->data<<"-->";
	cout<<endl;
	return;
}



void insert(node*&head, int data){
	
	node*temp=head;
	node*n=new node(data);
	
	n->next=head;
	if(temp!=NULL){
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=n;
	}
	else{
		n->next=n;
	}
	head=n;
}

void deleteNode(node*&head, int data){
	node*temp=head;
	node* del=getNode(head,data);
	
	if(del==NULL){
		return;
	}
	
	//otherwise
	if(del==head){
		head=head->next;
	}
	
	//stop one step behind the node to be deleted
	while(temp->next!=del){
		temp=temp->next;
	}
	temp->next=del->next;
	delete del;
}


int main(){
	node*head=NULL;
	
	insert(head,5);
	insert(head,4);
	insert(head,3);
	insert(head,2);
	insert(head,1);
	
	print(head);
	
	deleteNode(head,3);
	
	print(head);
	
	deleteNode(head,1);
	
	print(head);
	
	return 0;
}
