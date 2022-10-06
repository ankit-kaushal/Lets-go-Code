class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
       for(int ele:nums)
       {
           ele=abs(ele);
           if(nums[ele-1]>0)
               nums[ele-1]*=-1;
           else
               v.push_back(ele);
       }
        return v;
    }
};