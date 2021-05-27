#include<bits/stdc++.h>
using namespace std;

/* Adventage of Learning Iterators */
//Linear Search


// Templates + Iterators
template<class ForwardIterator, class T>
//Now it works on different containers like vector, list etc.
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){ 
	while(start!=end){
		if(*start==key){
			return start;
		}
		start ++;
	}
	return end;
}

int main() {
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(3);
	
	auto it=search(l.begin(),l.end(),5);
	
	if(it==l.end()){
		cout<<"element not present"<<endl;
	}
	else{
		cout<<*it<<endl;	
	}
	
	return 0;
}

/*Note:- l.begin() will have a datatype of 
list<int> :: iterator
and ForwardIterator will have this(list<int> :: iterator) data type*/


