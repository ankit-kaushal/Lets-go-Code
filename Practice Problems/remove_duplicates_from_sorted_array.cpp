/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{0,0,1,1,1,2,2,3,3,4};
	vector<int> v;
	int count;
	for(int i=0;i<nums.size();i++){
		if(nums[i]!=nums[i+1]){
			v.push_back(nums[i]);
		}
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		count++;
	}
	cout<<endl;
	cout<<count;
}

