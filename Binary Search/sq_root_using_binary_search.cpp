#include<iostream>
using namespace std;

float square_root(int n, int p){
	int start=0;
	int end=n;
	float ans=-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(mid*mid==n){
			return mid;
		}
		if(mid*mid>n){
			end=mid-1;
		}
		else{
			ans=mid;
			start=mid+1;
		}
	}
	
	//We found integer part using binary search
	//For floating part we will be using brute force approach
	
	float inc=0.1;
	for(int times=1;times<=p;times++){
		while(ans*ans<=n){
			ans=ans+inc;
		}
		//overshot the value
		ans=ans-inc;
		inc=inc/10;
	}
	
	return ans;
}


int main(){
	
	int n;
	cin>>n;

	cout<<square_root(n,3)<<endl;
	
	return 0;
}
