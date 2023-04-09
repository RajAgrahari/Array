//https://leetcode.com/contest/weekly-contest-340/problems/prime-in-diagonal/
bool check(int x)
    {
        if(x<=1)
        return true;
        for(int i=2;i*i<=x;i++)
        {
            if((x%i)==0)
            return true;
        }
        return false;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(check(nums[i][i])==false)
            {
                ans = max(ans,nums[i][i]);
              
            }
        }
        for(int i=0;i<n;i++)
        {
            if(check(nums[i][n-i-1])==false)
            {
                ans = max(ans,nums[i][n-i-1]);
               
            }
        }
        return ans;
    }
