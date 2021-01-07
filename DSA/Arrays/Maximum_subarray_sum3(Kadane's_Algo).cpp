#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n, key;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	
	int a[1000];
	int cumSum[1000]={0};
	
	cout<<"Enter elements of array"<<endl;
	cin>>a[0];
	cumSum[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumSum[i]=cumSum[i-1]+a[i];
	}
	
	int currentSum=0;
	int maxSum=0;

	
	for(int i=0;i<n;i++){
		currentSum=currentSum+a[i];
		if(currentSum<0){
			currentSum=0;
		}
		maxSum=max(currentSum,maxSum);
	}
	
	cout<<"Maximum Sum: "<<maxSum<<endl;
	
	return 0;
}
