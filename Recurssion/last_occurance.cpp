#include<iostream>
using namespace std;

int lastOcc(int *a, int n, int key){
	//base case
	if(n==0){
		return -1;
	}
	//recursive case
	int i = lastOcc(a+1,n-1,key);
	if(i==-1){
		if(a[0]==key){
			return 0;
		}
		else{
			return -1;
		}
	}
	//Otherwise if i returned by subproblem is not -1
	return i+1;
}


int main() {
	int a[]={1,2,3,7,4,5,6,7,10};
	int key=7;
	int n=sizeof(a)/sizeof(int);
	
	cout<<lastOcc(a,n,key)<<endl;
	
	return 0;
}
