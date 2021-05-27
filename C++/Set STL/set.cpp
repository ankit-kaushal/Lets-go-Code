#include<iostream>
#include<set>
using namespace std;

/*
Set is a container that is used to store a unique collection of elements. By default set is ordered. 
But, we also have unordered set. Set follows criteria to sort the elements by their values.
Set uses tree like data structure. It can be a BST, it can be a Red Black Tree.
Once inserted element in set, we can't update it. To update, we need to remove that element and insert the updated one.

*/


int main() {
    
    int arr[]={10,20,11,9,8,11,10};
    int n=sizeof(arr)/sizeof(int);
    
    set<int> s;
    for(int i=0;i<n;i++){
    	s.insert(arr[i]);
	}
	
	//Two ways to erase an element
	
	s.erase(10);
	
	auto it=s.find(11);
	s.erase(it);
	
	
	//Print all the emements
	//Set has its own itereator or we can use auto keyword.
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*(it)<<",";
	}
    return 0;
}
