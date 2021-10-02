#include<iostream>
#include<climits>
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
	
	int largest=INT_MIN;
	int smallest=INT_MAX;
	
	/*
	for(int i=0;i<n;i++){
		if(a[i]>largest){
			largest=a[i];
		}
		if(a[i]<smallest){
			smallest=a[i];
		}
	}*/
	
	//Can be also written using inbuilt function to avoid if contition:
	
	for(int i=0;i<n;i++){
		largest=max(largest,a[i]);
		smallest=min(smallest,a[i]);
	}
	
	
	
	cout<<"Largest Element: "<<largest<<endl;
	cout<<"Smallest Element: "<<smallest<<endl;
	
	return 0;
}
