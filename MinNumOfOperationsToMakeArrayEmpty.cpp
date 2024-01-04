int minOperations(vector<int>& nums) 
    {
         unordered_map<int,int> mp;
         for(int x:nums)
         mp[x]++;
         int ans = 0;
         for(auto it:mp)
         {
             int temp = it.second;
             if(temp==1)
             return -1;
             int tans = 0;
             if((temp)%3 == 1)
             {
                 tans = ((temp)/3 - 1);
                 tans += 2;
             }
             else if((temp)%3 == 2)
             {
                 tans = (temp)/3;
                 tans += 1;
             }
             else
             {
                 tans = (temp)/3;
             }
             ans += tans;
         }
         return ans;
        
    }
