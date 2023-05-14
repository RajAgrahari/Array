//https://leetcode.com/problems/power-of-heroes/description/
int sumOfPower(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        long long mod=1000000007,presum=0;
        for(int i=0; i<nums.size(); i++){
            long long d= ((long long)nums[i]*(long long)nums[i])%mod;
            ans=(ans+(long long)(d*(presum+nums[i]))%mod)%mod;
            presum=(2*presum+nums[i])%mod;
        }
        return ans;
    }
