#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,5,6,11,15,8};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	auto it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n){
		cout<<key<<" not found";
	}
	else{
		cout<<key<<" found at index: "<<index;
	}
	
}
