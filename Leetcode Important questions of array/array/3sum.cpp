class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
         vector<vector<int>>v1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int start=i+1;
            int end=n-1;
            int find = -1*nums[i];
            while(start<end)
            {
               int sum=nums[start]+nums[end];
                if(sum<find)
                {
                   start++;
                }
                else if(sum>find)
                {
                    end--;
                }
                else
                {
                     vector<int>v2={nums[i],nums[start],nums[end]};
                    v1.push_back(v2);
                    while(start<end && nums[start]==nums[start+1])
                    {
                        start++;
                    }
                    while(start<end && nums[end]==nums[end-1])
                    {
                        end--;
                    }
                    start++;
                    end--;
                }
            }
        }
        
      return v1;
    }
};