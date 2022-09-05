//  https://leetcode.com/problems/jump-game/
 bool canJump(vector<int>& nums) {
        int n = nums.size();
        int idx=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>=(idx-i))
                idx=i;
        }
        if(idx==0)
            return true;
        else
            return false;
    }