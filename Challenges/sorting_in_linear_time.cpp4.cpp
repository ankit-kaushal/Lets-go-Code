#include<bits/stdc++.h>
using namespace std;

/*
You will be given an array containing only 0s, 1s and 2s. 
You have sort the array in linear time that is O(N) where N is the size of the array.

*/

void linear_time(int a[], int n){
	int low=0, mid=0, high=n-1;
	while(mid<=high){
		if(a[mid]==0){
			swap(a[mid],a[low]);
			mid++;
			low++;
		}
		else if(a[mid]==1){
			mid++;
		}
		else{
			swap(a[mid],a[high]);
			high--;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	linear_time(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
