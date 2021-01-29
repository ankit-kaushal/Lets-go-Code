/*
You are given an integer array nums sorted in ascending order, and an integer target.

If target is found in the array return its index, otherwise, return -1.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{1};
	int target=0;
	
	auto it=find(nums.begin(),nums.end(),target);
	int index=it-nums.begin();
	
	if(index==nums.size()){
		cout<<"-1";
	}
	else{
		cout<<index;
	}
	
}

