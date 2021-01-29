#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a>b;
}

// If a>b then it will act as sort in descending order and if a<b then it will act as sort in ascending order


void bubble_sort(int arr[], int n, bool (&cmp)(int a, int b)){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<(n-i-1);j++){
			if(cmp(arr[j],arr[j+1])){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	
	int a[1000];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//Sort an array using sort() function, it is more efficient than other sorting function like merge sort, bubble sort etc.
	bubble_sort(a,n,compare);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
