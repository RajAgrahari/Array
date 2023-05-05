//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/
 int maxVowels(string s, int k) 
    {
        int  n = s.size();
        int cnt[26]={0};
        int mx=0;
        for(int i=0;i<k;i++)
        {
            cnt[s[i]-'a']++;
        }
        mx = max(mx,cnt[0]+cnt[4]+cnt[8]+cnt[14]+cnt[20]);
        for(int i=k;i<n;i++)
        {
            cnt[s[i-k]-'a']--;
            cnt[s[i]-'a']++;
            mx = max(mx,cnt[0]+cnt[4]+cnt[8]+cnt[14]+cnt[20]);
        }
        return mx;
    }
