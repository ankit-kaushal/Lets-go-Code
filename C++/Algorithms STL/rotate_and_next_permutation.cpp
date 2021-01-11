#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(int);
	rotate(arr,arr+2,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	//We can apply same on Vector as well 
	
	vector<int> v{10,20,30,40,50};
	rotate(v.begin(),v.begin()+3,v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	//Next Permutation
	vector<int> v1{1,2,3};
	next_permutation(v1.begin(),v1.end());
	next_permutation(v1.begin(),v1.end());
	cout<<endl;
	
	//for each loop
	
	for(int x:v1){
		cout<<x<<" ";
	}
	
	return 0;
}
