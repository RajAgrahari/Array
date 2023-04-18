//https://leetcode.com/problems/happy-number/
int next(int n)
    {
        int sum=0;
        while(n>0)
        {
            int digit = n%10;
            n = n/10;
            sum += (digit*digit);
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        unordered_map<int,int> mp;
        while(n!=1 && mp.find(n)==mp.end())
        {
            mp[n]++;
            n = next(n);
        }
        return n==1;
    }
