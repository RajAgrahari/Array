//https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/
 int longestSubarray(vector<int>& nums) 
    {
        int n = nums.size(),prev=0,ans=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            while(i<n && nums[i]==1)
            {
                i++;
            }
            ans = max(ans,prev+i-j);
            prev = i-j;
        }
        if(ans==n)
        ans--;
        return ans;
    }
