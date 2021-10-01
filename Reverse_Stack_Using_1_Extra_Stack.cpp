#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int> &s1,stack<int> &s2,int n){
	for (int i=0;i<n;i++) {
		s2.push(s1.top());
		s1.pop();
	}
}


void reverseStack(stack<int> &s1){
	// In final stack, the topmost element should be at the bottom
	int n=s1.size();
	//helper stack
	stack<int> s2;

	for(int i=0;i<n;i++){
		// Pick the element at top & insert it at the bottom
		int x=s1.top();
		s1.pop();

		//Transfer n-i-1 elements from s1 to s2
		transfer(s1,s2,n-i-1);

		//insert element x back into s1
		s1.push(x);

		//Transfer n-i-1 elements from s2 to s1
		transfer(s2,s1,n-i-1);
	}
}


int main(){
	
	stack<int> s;
	s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    reverseStack(s);
	while(!s.empty()){
		cout<<s.top()<<", ";
		s.pop();
	}
	
	return 0;
}

