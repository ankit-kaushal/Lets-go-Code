/*

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{-4,-1,0,3,10};
	vector<int> v;
	
	for(int i=0;i<nums.size();i++){
		v.push_back(nums[i]*nums[i]);
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}
