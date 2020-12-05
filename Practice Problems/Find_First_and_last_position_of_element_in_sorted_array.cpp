/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{5,7,7,8,8,10};
	vector<int> v;
	int target=8;
	
	bool present = binary_search(nums.begin(),nums.end(),target);
	int index_lb,index_ub;
	if(present){
		auto lb=lower_bound(nums.begin(),nums.end(),target);
		index_lb=lb-nums.begin();
		v.push_back(index_lb);
		
		auto ub=upper_bound(nums.begin(),nums.end(),target);
		index_ub=ub-nums.begin()-1;
		v.push_back(index_ub);
	}
	else{
		index_lb=-1;
		index_ub=-1;
		v.push_back(index_lb);
		v.push_back(index_ub);
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}

