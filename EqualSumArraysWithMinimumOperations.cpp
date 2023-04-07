//https://leetcode.com/problems/equal-sum-arrays-with-minimum-number-of-operations
int minOperations(vector<int>& nums1, vector<int>& nums2) 
    {
        long long sum1=0,sum2=0;
        int n = nums1.size(),m = nums2.size();
        for(int x:nums2)
        sum2 += x;
        for(int x:nums1)
        sum1 += x;
        if(m>(6*n) || n>(6*m))
        return -1;
        if(sum1<sum2)
        return minOperations(nums2,nums1);
       
        vector<int> diff;
        long long target = sum1-sum2;
        if(target==0)
        return 0;
        for(int i=0;i<n;i++)
        {
            diff.push_back(nums1[i]-1);
        }
        for(int i=0;i<m;i++)
        {
            diff.push_back(6-nums2[i]);
        }
        sort(diff.rbegin(),diff.rend());
        int cnt=0;
        for(int i=0;i<diff.size();i++)
        {
            cnt++;
            target -= diff[i];
            if(target<=0)
            return cnt;
        }
        return cnt;

    }
