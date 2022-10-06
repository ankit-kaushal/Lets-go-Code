class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int start=0;int end=height.size()-1;
        int maxi=INT_MIN;
        while(start<end)
        {
            int ans1=min(height[start],height[end]);
            int ans2=ans1*(end-start);
            int maxi=max(maxi,ans2);
            if(height[start]<height[end])
            {
                start++;
            }
            else
            {
                end--;
            }

        }
        return maxi;



    }
};