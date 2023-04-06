//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
int find(vector<int>& nums,int x)
    {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        ans += abs(nums[i]-x);
        return ans;
    }
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int ln= nums.size();
    
        if(ln%2) return find(nums,nums[ln/2]);
        return min(find(nums, nums[ln/2]), find(nums, nums[(ln/2) -1]));

    }
