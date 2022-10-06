#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
     
       sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
        }
           
    }
};
