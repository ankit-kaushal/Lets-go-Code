#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	cout<<"Static Allocation / Compile Time Allocation"<<endl;
	//Allocation and Deallocation is done by compiler
	int b[100];
	cout<<"Size of Array: ";
	cout<<sizeof(b)<<endl;
	cout<<"Starting address of Array: ";
	//The below statement gives starting address of the array
	cout<<b<<endl; //Value comes from Symbol Table; It cannot be overwritten; b is a constant and is part of Read Only Memory
	
	cout<<endl;
	
	cout<<"Dynamic Allocation / Run Time Allocation"<<endl;
	//Dynamic Allocation(on the fly)
	int n;
	cout<<"Enter total no of elements in Array: ";
	cin>>n;
	int *a = new int[n];
	cout<<"Size of Array: ";
	cout<<sizeof(a)<<endl;
	cout<<"Starting address of Array: ";
	//The below statement gives starting address of the array
	cout<<a<<endl; //This value come from the variable a that is created inside the static memory; It can be overwritten like:- a = new char[30];
	
	cout<<"Enter elements of Array: ";
	
	//No change (Same like in Static Array)
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	
	//Freeup the space to avoid Menory Leaks
	delete [] a;

	return 0;
}

