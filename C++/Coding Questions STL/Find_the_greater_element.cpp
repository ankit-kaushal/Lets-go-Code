#include<bits/stdc++.h>
using namespace std;

/*

We are given a circular array, print the next greater number for every element. If it is not found print -1 for that number. To find the next greater number for element Ai , start from index i + 1 and go uptil the last index after which we start looking for the greater number from the starting index of the array since array is circular.

Input Format->
First line contains the length of the array n. Second line contains the n space separated integers.

Constraints->
1 <= n <= 10^6
-10^8 <= Ai <= 10^8 , 0<= i< n

Output Format->
Print n space separated integers each representing the next greater element.

Sample Input->
3
1 2 3
Sample Output->
2 3 -1
Explanation->
Next greater element for 1 is 2,
for 2 is 3 but not present for 3 therefore -1

*/

int main(){
	
	int n;
	cin>>n;
	int v[2*n];
	int v2[2*n];
	for(int i=0;i<n;i++){
		//int val;
		cin>>v[i];
		//v.push_back(val);
	}
	
	for(int i=n;i<2*n;i++){
		v[i]=v[i-n];
	}
	
	stack<int> s;
	
	
	for(int i=2*n-1;i>=0;i--){
		while(!s.empty()&&s.top()<=v[i]){
			s.pop();
		}
		if(s.empty()){
			v2[i]=-1;
		}
		else{
			v2[i]=s.top();
		}
		s.push(v[i]);
	}
	
	for(int i=0;i<n;i++){
		cout<<v2[i]<<" ";
	}
	return 0;
}
