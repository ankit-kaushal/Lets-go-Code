#include<iostream>
using namespace std;

int firstOcc(int *a, int n, int key){
	//base case
	if(n==0){
		return -1;
	}
	//recursive case
	if(a[0]==key){
		return 0;
	}
	int i = firstOcc(a+1,n-1,key);
	if(i==-1){
		return -1;
	}
	return i+1;
}


//Different Style of writing same function
int linearSearch(int *a, int n, int key){
	//base case
	if(i==n){	 // In for-loop -> Stopping Criteria
		return -1;
	}
	//recursive case
	if(a[i]==key){	 // In for-loop -> If condition inside loop
		return i;
	}
	return linearSearch(int *a, int n+1, int key);	// In for-loop -> Update Condition
	
	/* The above code will work like a for loop*/
}


int main() {
	int a[]={1,2,3,7,4,5,6,7,10};
	int key=7;
	int n=sizeof(a)/sizeof(int);
	
	cout<<firstOcc(a,n,key)<<endl;
	
	return 0;
}
