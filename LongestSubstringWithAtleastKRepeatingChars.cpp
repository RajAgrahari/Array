//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/
int helper(string s,int start,int end,int k)
    {
        if(end<k)
        return 0;
        int cnt[26]={0};
        
         for(int i=start;i<end;i++)
         cnt[s[i]-'a']++;
         
         for(int i=start;i<end;i++)
         {
             if(cnt[s[i]-'a']<k)
             {
                int midnext = i+1;
                 while(midnext<end && cnt[s[midnext]-'a']<k)
                midnext++;
                return max(helper(s,start,i,k),helper(s,midnext,end,k));
             }
         }
         return (end-start);

    }
    int longestSubstring(string s, int k) 
    {
        int n = s.size();
        return helper(s,0,n,k);
    }
