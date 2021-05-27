#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={20,30,40,40,40,50,100,1100};
	int n=sizeof(arr)/sizeof(int);
	int key;
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

/*	lower_bound will give the first element that is greater than or equal to key (>=key)
	upper_bound will give the first element that is strictly greater than key (>key)
*/
