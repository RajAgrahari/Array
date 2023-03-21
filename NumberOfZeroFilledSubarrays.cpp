//https://leetcode.com/problems/number-of-zero-filled-subarrays/
long long zeroFilledSubarray(vector<int>& nums) 
    {
         long long ans=0;
         int i=0;
         while(i<n)
         {
             int j = i;
             while(i<n && nums[i]==0)
             i++;
             long long l = i-j;
             ans += (l*(l+1))/2;
             i++;
         }
         return ans;
    }
