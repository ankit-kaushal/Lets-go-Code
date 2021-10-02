#include<iostream>
#include<algorithm>
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
	
	//Generate all subarrays
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//Elements of subarray(i,j)
			for(int k=i;k<=j;k++){
				cout<<a[i]<<",";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
