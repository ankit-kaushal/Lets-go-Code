/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{0,1,2,2,3,0,4,2};
	int val=2;
	int count=0;
	vector<int> v;
	for(int i=0;i<nums.size();i++){
		if(nums[i]!=val){
			v.push_back(nums[i]);
		}
	}
	nums.clear();
	for(int i=0;i<v.size();i++){
		nums.push_back(v[i]);
		count++;
	}
	cout<<count;
	cout<<endl;
	
	for(int i=0;i<nums.size();i++){
		cout<<nums[i];
	}
}

