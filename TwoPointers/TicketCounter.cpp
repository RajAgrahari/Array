//https://practice.geeksforgeeks.org/problems/ticket-counter-2731/1
int distributeTicket(int N, int k) 
    {
        int l=1,r=N;
        int ans=0;
        while(true)
        {
            if(l+k <= r)
            {
                l = l+k;
                ans = l;
            }
            else
            {
                ans = r;
                break;
            }
            
            if(r-k >= l)
            {
                r = r-k;
                ans = r;
            }
            else
            {
                ans = l;
                break;
                
            }
        }
        return ans;
    }
