#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
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
	
	cout<<"Enter key to search"<<endl;
	cin>>key;
	
	cout<<binary_search(a,n,key)<<endl;
	
	return 0;
}
