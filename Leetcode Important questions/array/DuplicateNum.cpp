class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                flag= nums[i];
                break;
            }
        }
        return flag;
    }
};