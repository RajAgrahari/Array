// https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-93/problems/
int minimumOperations(int n, vector<int> &a) 
    {
         unordered_map<int,int> mp;
         for(int i=0;i<n;i++)
         {
             mp[a[i]%3]++;
         }
         int ans=0;
         if(mp[2]<=mp[1])
         {
             ans += mp[2];
             mp[1] -= mp[2];
             if(mp[1]%3 != 0)
             return -1;
             ans += ((mp[1]/3)*2);
         }
         else{
              ans += mp[1];
             mp[2] -= mp[1];
             if(mp[2]%3 != 0)
             return -1;
             ans += ((mp[2]/3)*2);
         }
         return ans;
         
    }
