//https://leetcode.com/problems/sign-of-the-product-of-an-array/
 int signFunc(long long x)
    {
        if(x<0)
        return -1;
        if(x>0)
        return 1;
        return 0;
    }
    int arraySign(vector<int>& nums) 
    {
        int pro = 1;
        for(int i=0;i<nums.size();i++)
        pro *= signFunc(nums[i]);
        return pro;
    }
