//https://leetcode.com/problems/smallest-missing-non-negative-integer-after-operations/
int findSmallestInteger(vector<int>& nums, int value) 
    {
          int n = nums.size();
         unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x = (value + (nums[i])%value)%value;
            mp[x]++;
        }
        int x = 0;
        while(x<n)
        {
            if(mp[x%value]==0)
            {
               return x;
            }
            mp[x%value]--;
            x++;
        }
        return n;
          
    }
