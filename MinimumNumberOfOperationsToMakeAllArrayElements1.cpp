//https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
int minOperations(vector<int>& nums) 
    {
        int o = 0;
        int n = nums.size();
        for(int x:nums)
        {
            if(x==1)
            o++;
        }
        if(o>0)
        return n-o;
        else{
            int mi = INT_MAX;
            for(int i=0;i<n;i++)
            {
                int num = nums[i];
                for(int j=i+1;j<n;j++)
                {
                    num = __gcd(num,nums[j]);
                    if(num==1)
                    {
                        mi = min(mi,j-i);
                        break;
                    }
                }
                if(num!=1)
                break;
            }
            if(mi==INT_MAX)
                return -1;
            return n+mi-1;
        }
        
    }
