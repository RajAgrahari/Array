//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description/
int mod = 1000000007;
    int power(int n,int r)
    {
        if(r==0)
        return 1;
        long long ans = power(n,r/2);
        ans = (ans*ans)%mod;
        if(r&1)
        return (ans*n)%mod;
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int i=0,j=n-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
            {
                int temp = power(2,j-i);
                ans = (ans + 1 + (temp-1))%mod;
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
