//https://practice.geeksforgeeks.org/problems/61567fb59e9f202db5cc2ad320ffeb6d95bf72d7/1
bool wifiRange(int n, string s, int x)
    {
          int back=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            back++;
            else{
                if(back>x)
                return 0;
                back = -x;
            }
        }
        if(back>0)
        return 0;
        return 1;
    }
