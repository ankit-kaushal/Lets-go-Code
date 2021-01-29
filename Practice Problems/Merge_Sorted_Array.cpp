/*

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums1{1,2,3,0,0,0};
	int m = 3;
	vector<int> nums2{2,5,6};
	int n = 3;
	vector<int> nums;
	
	for(int i=0;i<m;i++){
		nums.push_back(nums1[i]);
	}
	
	for(int i=0;i<n;i++){
		nums.push_back(nums2[i]);
	}
	
	sort(nums.begin(),nums.end());

	nums1.clear();
	
	for(int i=0;i<nums.size();i++){
		nums1.push_back(nums[i]);
	}
	
}
