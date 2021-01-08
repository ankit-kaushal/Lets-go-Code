#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int a[100][100]={0};
	int m,n;
	cout<<"Enter rows and columns of 2D-Array:";
	cin>>m>>n;
	
	int val=1;
	for(int row=0;row<=m-1;row++){
		for(int col=0;col<=n-1;col++){
			a[row][col]=val;
			val=val+1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
