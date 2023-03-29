//https://practice.geeksforgeeks.org/problems/839d6ba2c2e4c669ba9d9d9f32ad20118937284e/1
int countSubstring(string s)
    {
        int n = s.size();
         int cnt=0;
         for(int i=0;i<n;i++)
         {
             int a=0,b=0;
             for(int j=i;j<n;j++)
             {
                 if(s[j]>='a' && s[j]<='z')
                 a++;
                 if(s[j]>='A' && s[j]<='Z')
                 b++;
                 if(a==b)
                 cnt++;
             }
         }
         return cnt;
    }
