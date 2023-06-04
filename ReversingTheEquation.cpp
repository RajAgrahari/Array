//https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1
string reverseEqn (string s)
    {
         string ans;
         int n = s.size();
         for(int i=0;i<n;i++)
         {
             string temp = "";
             while(i<n && s[i]>='0' && s[i]<='9')
             {
                 temp += s[i];
                 i++;
             }
             if(i<n)
             temp = s[i] + temp;
             ans = temp + ans;
         }
         return ans;
    }
