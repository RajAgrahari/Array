//https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/
vector<long long> findPrefixScore(vector<int>& nums) 
    {
         int n = nums.size();
        vector<long long> conver(n,0);
        vector<long long> pre(n,0);
        conver[0] = 2*nums[0];
        int mx = nums[0];
        for(int i=1;i<n;i++)
        {
            mx = max(mx,nums[i]);
            conver[i] = nums[i] + mx;
        }
        pre[0] = conver[0];
        for(int i=1;i<n;i++)
            pre[i] = conver[i] + pre[i-1];
        return pre;
    }
