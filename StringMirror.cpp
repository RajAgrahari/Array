//https://practice.geeksforgeeks.org/problems/d385b9d635b7b10eef6bf365b84922aaeec9eb98/1
 string stringMirror(string str)
    {
        string ans="";
        ans += str[0];
        for(int i=1;i<str.size();i++)
        {
           if(str[i-1]>str[i])
           ans += str[i];
           else if(ans.size()>1 && str[i-1]==str[i])
           ans += str[i];
           else
           break;
        }
        string temp = ans;
        reverse(ans.begin(),ans.end());
        ans = temp+ans;
        return ans;
    }
