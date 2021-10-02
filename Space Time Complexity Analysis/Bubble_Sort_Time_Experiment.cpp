#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

//Bubble Sort
void bubble_sort(int a[], int n){
	//N-1 large elements to the end
	for(int i=1;i<=n-1;i++){
		
		//Pairwise Swapping in the unsorted part of the array
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
	
	int a[100000];
	
	//Create a Reverse Sorted Array
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++){
		a[i]=n-1;
	}
	
	time_t start = clock();
	bubble_sort(a,n);
	time_t end = clock();
	
	cout<<"Time taken by Bubble Sort "<<end-start<<endl;
	
	for(int i=0;i<n;i++){
		a[i]=n-1;
	}
	
	start = clock();
	sort(a,a+n); //Inbuilt Sort works same like Merge Sort
	end = clock();
	
	cout<<"Time taken by Merge Sort "<<end-start<<endl;
	
	return 0;
}
