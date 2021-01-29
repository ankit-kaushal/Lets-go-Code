#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={2,5,6,11,15,8};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter Key to find: ";
	cin>>key;
	//Instead of auto it we can also use int* it
	auto it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n){
		cout<<key<<" not found";
	}
	else{
		cout<<key<<" found at index: "<<index;
	}
	
}
