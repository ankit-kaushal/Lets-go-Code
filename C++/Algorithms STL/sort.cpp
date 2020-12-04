#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a>b;
}

// If a>b then it will act as sort in descending order and if a<b then it will act as sort in ascending order

int main(){
	int n;
	cin>>n;
	
	int a[1000];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//Sort an array using sort() function, it is more efficient than other sorting function like merge sort, bubble sort etc.
	sort(a,a+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
