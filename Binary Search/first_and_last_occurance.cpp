#include<iostream>
using namespace std;

int first_occurance(int a[], int n, int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	//Update in direction that ans value gets lower and lower
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==key){
			ans=mid;
			end=mid-1;
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}

int last_occurance(int a[], int n, int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==key){
			// Do two things
			ans=mid;
			start=mid+1;	//Do not stop but explore the right part of the arrays
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}

int main(){
	
	int n, key;
	/*
	cout<<"Enter size of array"<<endl;
	cin>>n;
	
	int a[1000];
	
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}*/
	
	int a[]={1,2,5,8,8,8,8,8,10,12,15,20};
	n=sizeof(a)/sizeof(int);
	
	cout<<"Enter key to search"<<endl;
	cin>>key;
	
	cout<<first_occurance(a,n,key)<<endl;
	cout<<last_occurance(a,n,key)<<endl;
	
	return 0;
}
