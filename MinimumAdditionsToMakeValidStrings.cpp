//https://leetcode.com/problems/minimum-additions-to-make-valid-string/
int addMinimum(string word) 
    {
        int i=0,ans=0,n=word.size();
        string s="abc";
        while(i<n)
        {
            int cnt=0,j=0;
            while(i<n && j<3)
            {
                if(word[i]==s[j])
                {
                    cnt++;
                    i++;
                }
                j++;
            }
            ans += (3-cnt);
        }
        return ans;
    }
