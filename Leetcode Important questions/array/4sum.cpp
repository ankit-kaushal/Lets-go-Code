class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     
        vector<vector<int>>v1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n-3;i++)
        {
            if(i>0 &&  nums[i]==nums[i++])
            continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    continue;
                }
                    
                int start=j+1;
                int end=n-1;
                int sum1=target-(nums[i]+nums[j]);
                while(start<end)
                {
                    // int sum=nums[start]+nums[end];
                    if(nums[start]+nums[end]<sum1)
                    {
                        start++;
                         while(end<start&&nums[start]==nums[start-1])
                        start++;
                    }
                    else if(nums[start]+nums[end]>sum1)
                    {
                        end--;
                         while(end>start&&nums[end]==nums[end+1])
                        end--;
                    }
                    else
                    {
                        vector<int>v2={nums[i],nums[j],nums[start],nums[end]};
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
        }
        
        return v1;
        
    }
};