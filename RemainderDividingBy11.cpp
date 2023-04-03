//https://practice.geeksforgeeks.org/problems/aa8c89caad6b5c3a76ba5e6d65454f77aac3f3543526/1
int xmod11(string x)
    {
        long long e=0,o=0;
        for(int i=0;i<x.size();i++)
        {
            if(i%2 == 0)
            {
                o += (x[i]-'0');
            }
            else{
                e += (x[i]-'0');
            }
        }
        long long diff = (o-e)%11;
        if(x.size()%2 == 0)
        return abs(diff-11)%11;
        return diff;
    
    }
