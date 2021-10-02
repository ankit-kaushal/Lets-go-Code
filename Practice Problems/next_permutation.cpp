/*
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{1,2,3};
	next_permutation(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

