#include<bits/stdc++.h>
using namespace std;

/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format-->
Constraints->
Length of Array should be between 1 and 1000.

Output Format-->
Sample Input->
4
1 0 2 9
5
3 4 5 6 7
Sample Output->
3, 5, 5, 9, 6, END
Explanation->
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .
*/

int convert(vector<int> v){
	int n=v.size();
	int res=0;
	int i=0;
	while(n>0){
		res=res+(v[i]*pow(10,(n-1)));
		n--;
		i++;
	}
	return res;
}

void convertVec(int n){
	vector<int> v;
	while(n!=0){
		int val=n%10;
		v.push_back(val);
		n=n/10;
	}
	
	for(int i=v.size()-1;i>=0;i--){
		cout<<v[i]<<",";
	}
}


int main(){
	int m,n;
	vector<int> v1;
	vector<int> v2;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		v1.push_back(val);
	}
	
	cin>>m;
	
	for(int i=0;i<m;i++){
		int val;
		cin>>val;
		v2.push_back(val);
	}
	
	int res=convert(v1)+convert(v2);
	
	convertVec(res);
	
	
}
