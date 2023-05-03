//https://leetcode.com/problems/find-the-difference-of-two-arrays/description/
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<vector<int>> ans(2);
        int n = nums1.size();
        int m = nums2.size();
        int cnt1[2001]={0},cnt2[2001]={0};
        for(int i=0;i<n;i++)
        {
            cnt1[nums1[i]+1000] = 1;
        }
        for(int i=0;i<m;i++)
        {
            cnt2[nums2[i]+1000] = 1;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt1[nums1[i]+1000]==1 && cnt2[nums1[i]+1000]!=1)
           {
              ans[0].push_back(nums1[i]);
              cnt1[nums1[i]+1000]=0;
           } 
        }
        for(int i=0;i<m;i++)
        {
            if(cnt2[nums2[i]+1000]==1 && cnt1[nums2[i]+1000]!=1)
            {
                ans[1].push_back(nums2[i]);
               cnt2[nums2[i]+1000]=0;
            }
        }
        return ans;
    }
