//https://leetcode.com/contest/weekly-contest-343/problems/lexicographically-smallest-beautiful-string/
 string smallestBeautifulString(string s, int k) 
    {
        int n = s.size();
        int idx=-1;
        int i = n-1;
        while(i>=0)
        {
                for(int j=s[i]-'a'+1;j<k;j++)
                {
                    bool p = false;
                    if(i>=2 && s[i-2]==(j+'a'))
                    {
                            p = true;
                    }
                    if(i>=1 && s[i-1]==(j+'a'))
                    {
                        p = true;
                    }
                   if(!p)
                   {
                       s[i] = j+'a';
                       idx = i;
                       break;
                   }
                }
            if(idx>=0)
            break;

            i--;
        }
           
         if(idx==-1)
         return "";

         for(int i=idx+1;i<n;i++)
         {
             for(int j=0;j<3;j++)
             {
                 bool p = false;
                    if(i>=2 && s[i-2]==(j+'a'))
                    {
                        p = true;
                    }
                    if(i>=1 && s[i-1]==(j+'a'))
                    {
                        p = true;
                    }
                   if(!p)
                   {
                       s[i] = j+'a';
                       break;
                   }
             }
         }
        return s;
    }
