//https://practice.geeksforgeeks.org/problems/1e2f365be6114b671b915e145ec7dbcfdc432910/1
string removeReverse(string s) 
    {
        int n = s.size();
        int i=0,j=n-1;
        bool f=true;
        string ans;
        int cnt[26]={0};
        for(auto c:s)
        cnt[c-'a']++;
        while(i<n && j>=0)
        {
            if(f)
            {
                while(i<n && (s[i]=='.' || cnt[s[i]-'a']<=1))
                {
                    i++;
                }
                if(i<n)
                {
                    cnt[s[i]-'a']--;
                    s[i]='.';
                    i++;
                }
                else{
                    break;
                }
            }
            else{
        
                while(j>=0 && (s[j]=='.' || cnt[s[j]-'a']<=1))
                {
                    j--;
                }
                if(j>=0)
                {
                    cnt[s[j]-'a']--;
                    s[j]='.';
                    j--;
                }
                else{
                    break;
                }
            }
            f = (!f);
        }
        if(f==false)
        {
           for(int i=0;i<n;i++)
           {
               if(s[i]!='.')
               ans += s[i];
           }
           reverse(ans.begin(),ans.end());
        }
        else{
            for(int i=0;i<n;i++)
            {
               if(s[i]!='.')
               ans += s[i];
            }
            
            
        }
        return ans;
    }
