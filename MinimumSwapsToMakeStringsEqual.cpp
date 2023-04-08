//https://leetcode.com/problems/minimum-swaps-to-make-strings-equal/
int minimumSwap(string s1, string s2) 
    {
         if(s1.size()!=s2.size())
         return -1;
         int cnt=0;
         for(int i=0;i<s1.size();i++)
         {
             if(s1[i]==s2[i])
             continue;
             bool f=false;
             for(int j=i+1;j<s2.size();j++)
             {
                 if(s2[j]==s2[i] && s2[j]!=s1[j])
                 {
                     char temp = s1[i];
                     s1[i] = s2[j];
                     s2[j] = temp;
                     f=true;
                     cnt++;
                     break;
                 }
             }
             if(f==false)
             {
                for(int j=i+1;j<s1.size();j++)
                {
                    if(s1[j]==s2[i] && s1[j]!=s2[j])
                    {
                        char temp = s1[j];
                        s1[j] = s2[j];
                        s2[j] = temp;
                        
                        temp = s1[i];
                        s1[i] = s2[j];
                        s2[j] = temp;
                        cnt+=2;
                        break;
                    }
                }
             }
         }
         for(char c:s1)
         cout<<c;
         cout<<endl;
         for(char c:s2)
         cout<<c;
         cout<<endl;
         if(s1!=s2)
         return -1;
         return cnt;
    }
