#include<iostream>
#include<algorithm>
using namespace std;

// define a comparator function
bool compare(int a, int b){
	return a>b;
}

int main(){
	
	int n, key;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	
	int a[1000];
	
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//sort an array using sort() function, more efficient
	sort(a,a+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
