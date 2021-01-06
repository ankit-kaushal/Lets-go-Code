#include<iostream>
using namespace std;

void bubble_sort(int a[], int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<=(n-i-1);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	
	int n, key;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	
	int a[1000];
	
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	bubble_sort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
