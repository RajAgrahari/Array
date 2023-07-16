//https://leetcode.com/contest/weekly-contest-354/problems/minimum-index-of-a-valid-split/
  int minimumIndex(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        int n = nums.size();
        int cnt=0;
        int dom = -1;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]*2>n)
            {
                dom = nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            int l1 = i+1;
            int l2 = n-i-1;
            if(dom==nums[i])
            cnt++;
            if((cnt*2) > l1 && ((mp[dom]-cnt)*2)>l2)
            return i;
            
        }
        return -1;
        
    }
