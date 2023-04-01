//https://leetcode.com/contest/biweekly-contest-101/problems/find-the-substring-with-maximum-cost/
 int maximumCostSubstring(string s, string chars, vector<int>& vals) 
    {
         unordered_map<char,int> mp;
         for(int i=0;i<chars.size();i++)
             mp[chars[i]]=vals[i];
         for(int i=0;i<s.size();i++)
         {
             if(mp.find(s[i])==mp.end())
             mp[s[i]] = s[i]-'a'+1;
         }
         int cur=0,mx=INT_MIN;
         for(int i=0;i<s.size();i++)
         {
             cur += mp[s[i]];
             mx = max(mx,cur);
             if(cur<0)
             cur=0;
         }
         return mx<0?0:mx;
    } 
