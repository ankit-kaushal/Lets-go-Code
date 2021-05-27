#include<bits/stdc++.h>
using namespace std;

/* Adventage of Learning Iterators */
//Linear Search

// Templates + Iterators + Comparators
template<class ForwardIterator, class T, class compare>
//Now it works on different containers like vector, list etc.
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, compare cmp){ 
	while(start!=end){
		if(cmp(*start,key)){
			return start;
		}
		start ++;
	}
	return end;
}

/* The above is how STL classes/functions are implemented and Generic function is written */

class Book{
	public:
		string name;
		int price;
		
	Book(){
		
	}
	
	Book(string name, int price){
		this->name = name;
		this->price = price;
	}
};

class BookCompare{
	
	public:
		bool operator()(Book A, Book B){
			if(A.name==B.name){
				return true;
			}
			return false;
		}
};

int main() {
	
	Book b1("C++",100); // Old Edition
	Book b2("python",120);
	Book b3("Java",130);
	
	vector<Book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);
	
	Book booktofind("C++",110); //New Edition
	BookCompare cmp;
	
	auto it=search(l.begin(),l.end(),booktofind,cmp);
	
	if(it!=l.end()){
		cout<<"Book Found"<<endl;
	}
	else{
		cout<<"Not Found"<<endl;	
	}
	
	return 0;
}

/*Note:- l.begin() will have a datatype of 
list<int> :: iterator
and ForwardIterator will have this(list<int> :: iterator) data type*/


/* 	Templetes give us the freedom from underlying data type
	Iterators give us the freedom from containers
	Comparators give us the freedom from different types of operations operating on the data
*/

