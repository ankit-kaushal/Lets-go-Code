#include<iostream>
using namespace std;

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
	
	int i;
	
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<key<<" is present at index: "<<i<<endl;
			break;
		}
	}
	if(i==n){
		cout<<key<<" is not present in array"<<endl;
	}
	
	return 0;
}
