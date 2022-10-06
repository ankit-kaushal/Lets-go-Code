class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        vector<int>v;
        int s=nums.size();
       int st=0;
        int en=s-1;
        sort(nums.begin(),nums.end());
        while(st<en)
        {
            if(nums[st]+nums[en]==target)
            {
                v.push_back(st);
                v.push_back(en);
                break;
            }
            else
            {
                if(nums[st]+nums[en]>target)
                {
                    en-=1;
                }
                else
                {
                    st+=1;
                }
            }
        }
        return v;
    }
};