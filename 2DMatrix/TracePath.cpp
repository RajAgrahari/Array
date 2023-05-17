//https://practice.geeksforgeeks.org/problems/trace-path3840/1
int isPossible(int n, int m, string s)
    {
        int x=0,y=0;
        int p = s.size();
         int minx=INT_MAX,miny=INT_MAX,maxx=INT_MIN,maxy=INT_MIN;
        for(int i=0;i<p;i++)
        {
            if(s[i]=='L')
            y += 1;
            else if(s[i]=='R')
            y -= 1;
            else if(s[i]=='D')
            x += 1;
            else
            x -= 1;
            
            minx=min(x,minx);
            maxx=max(maxx,x);
            miny=min(y,miny);
            maxy=max(y,maxy);
            if(abs(maxx-minx)>=n || abs(maxy-miny)>=m || abs(y)>=m || abs(x)>=n)
            return 0;
        }
        
        return 1;
    }
