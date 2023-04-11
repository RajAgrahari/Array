//https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1
int solve(int a, int b, int c) 
    {
         int mx = max({a,b,c});
         if(mx <= 2*(a+b+c-mx+1))
         return a+b+c;
         return -1;
    }
