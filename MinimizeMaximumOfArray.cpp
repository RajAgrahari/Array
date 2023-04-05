//https://leetcode.com/problems/minimize-maximum-of-array/
int minimizeArrayValue(vector<int>& nums) 
    {
        int l = 0;
        int r = *max_element(nums.begin(),nums.end());
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            long long sum=0;
            bool f=false;
            for(int i=0;i<nums.size();i++)
            {
                sum += nums[i];
                if(sum > ((long long)mid*(i+1)))
                {
                    f=true;
                    break;
                }
            }
            if(f)
            l = mid+1;
            else
            r = mid-1;
        }
        return r+1;
    }
