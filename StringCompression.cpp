// https://leetcode.com/problems/string-compression/
    string convertToString(int x)
   {
        string ans = "";
        while(x>0)
        {
            ans = (char)((x%10)+'0') + ans;
            x /= 10;
        }
        return ans;
    }
    int compress(vector<char>& chars) 
    {
        int i=0,k=0,n=chars.size();
        while(i<n)
        {
            int j=i;
            while(i<n && chars[i]==chars[j])
            {
                i++;
            }
            chars[k++] = chars[j];
            string temp = convertToString(i-j);
            if(i-j > 1)
            for(char c:temp)
            chars[k++]=c;
        }
        return k;
    }
