#include<bits/stdc++.h>
using namespace std;

//Linear Search

// Using Template we get freedom  from all types of datatypes
template<typename T>

int search(T a[], int n, T key)
{
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
		}
	}
	return n;
}

int main() {
	//can be used as integer
	int a[]={1,2,3,10,11,5,8};
	int n=sizeof(a)/sizeof(int);
	int key=10;
	cout<<search(a,n,key)<<endl;
	
	//can be used as float
	float b[]={1.1,5.2,6.9,7.5,1.2,3.6,9.8};
	n=sizeof(b)/sizeof(float);
	float k=1.2;
	cout<<search(b,n,k)<<endl;
	
	//can be used even for other data types
	
}


