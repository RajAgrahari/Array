//https://leetcode.com/problems/k-radius-subarray-averages/description/
vector<int> getAverages(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<long long> pre(n+1,0);
        for(int i=1;i<=n;i++)
        pre[i] = pre[i-1]+nums[i-1];
        vector<int> ans(n,-1);
        for(int i=k;i<n;i++)
        {
            if(i+k < n)
            {
                ans[i] = (pre[i+k+1]-pre[i-k])/(2*k+1);
            }
        }
        return ans;
    }
