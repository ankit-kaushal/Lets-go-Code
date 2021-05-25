#include<bits/stdc++.h>
using namespace std;

/*
Given an array find the number which comes with maximum frequency. It must work in O(n) time complexity.

Input Format->
Enter the size of the array N and add N more numbers and store in an array

Constraints->
1 <= N <= 10^7
-109 <= A[i] <= 109

Output Format->
Display the number with the maximum frequency.

Sample Input->
5
1 2 2 2 3
Sample Output->
2
Explanation->
2 has the highest frequency in the array i.e. 3.

*/
int main(){
	
	int n, count=1, count2=1, res;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		v.push_back(val);
	}
	
	sort(v.begin(),v.end());
	res=v[0];
	
	for(int i=1;i<n;i++){
		if(v[i]==v[i-1]){
			count++;
		}
		else{ 
            if(count>count2){ 
                count2=count; 
                res=v[i-1]; 
            } 
            count=1; 
        }
	}
	if(count>count2){ 
        count2=count; 
        res=v[n-1]; 
    }
	cout<<res<<endl;
	
	return 0;
}
