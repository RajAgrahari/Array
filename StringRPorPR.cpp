//https://practice.geeksforgeeks.org/problems/d25f415de2ff3e02134de03e17ad019d723ab2e9/1
string delAB(char a,char b,long long& cnt,string& S)
    {
        string temp;
        for(const auto& x: S)
        {
            if(!temp.empty() && temp.back() == a && x == b)
            {
                temp.pop_back();
                cnt++;
            }
            else temp += x;
        }
        return temp;
    }
    long long solve(int x,int y,string s)
    {
        long long cnt1 = 0,cnt2 = 0;
        
        char a = 'p', b = 'r';
        if(x < y)
        swap(a,b);
        
        string temp = delAB(a,b,cnt1,s);
        delAB(b,a,cnt2,temp);
        
        if(x < y)
        swap(cnt1,cnt2);
        
        return cnt1*x + cnt2*y;
    }
