class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int temparr[m+n];
        int i=0,j=0,k=0;
        
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                temparr[k]=nums1[i];
                
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                temparr[k]=nums2[j];
                
                j++;
            }
            else
            {
                temparr[k]=nums1[i];
                i++;
                k++;
                temparr[k]=nums2[j++];
            }
            k++;
            
        }
        while(i<m)
        {
            temparr[k]=nums1[i];
            
            i++;
            k++;
        }
        while(j<n)
        {
            temparr[k]=nums2[j];
            j++;
            k++;
        }
        for(int t=0;t<m+n;t++)
        {
            nums1[t]=temparr[t];
        }
        return;
    }
};