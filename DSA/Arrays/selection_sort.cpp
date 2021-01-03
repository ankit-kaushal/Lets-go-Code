#include<iostream>
using namespace std;

void selection_search(int a[], int n){
	for(int i=0;i<n-1;i++){
		//find out the smallest element index in the unsorted part
		int min_index=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
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
	
	selection_search(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	
	return 0;
}
