/*

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{2,0,2,1,1,0};
	
	sort(nums.begin(),nums.end());
	
	for(int i=0;i<nums.size();i++){
		cout<<nums[i];
	}
	
}
