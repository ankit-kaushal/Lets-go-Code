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
	
	int currentSum=0;
	int maxSum=0;
	int left=-1;
	int right=-1;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			for(int k=i;k<=j;k++){
				currentSum+=a[k];
			}
			//Update Maximum Sum if currentSum>maxSum
			if(currentSum>maxSum){
				maxSum=currentSum;
				left=i;
				right=j;
			}
		}
	}
	
	cout<<"Maximum Sum: "<<maxSum<<endl;
	
	for(int i=left;i<=right;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
