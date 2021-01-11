#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={20,30,40,40,40,50,100,1100};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter Key to find: ";
	cin>>key;
	
	bool present = binary_search(arr,arr+n,key);
	
	if(present){
		cout<<"present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}
	
	auto lb = lower_bound(arr,arr+n,key);
	cout<<"lower bound of "<<key<<" is "<<(lb-arr)<<endl;
	
	auto ub = upper_bound(arr,arr+n,key);
	cout<<"upper bound of "<<key<<" is "<<(ub-arr)<<endl;
	
	cout<<"Ocurring Frequency of "<<key<<" is "<<(ub-lb)<<endl;
	
	return 0;
}

