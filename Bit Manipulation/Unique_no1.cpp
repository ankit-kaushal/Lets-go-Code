#include <iostream>
using namespace std;

//Problem - Unique Number 2N + 1
//Given a list of numbers where every numbers occur twice except one, find that unique number

int main() {
    int n;
    cin>>n;
    
    int no;
    int ans=0;
    //Bitwise XOR operator to solve
    //Helped to solve without using any extra storage/memory
    for(int i=0;i<n;i++){
    	cin>>no;
    	ans=ans^no;
	}
	cout<<ans<<endl;
}

