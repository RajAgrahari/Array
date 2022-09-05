//  https://leetcode.com/problems/4sum/   
    int mod =1000000009;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> v;
         set<vector<int>> s;
         int n=nums.size();
         sort(nums.begin(),nums.end());
         long long sum=0;
        for(int p=0;p<n;p++)
        {
            for(int k=p+1;k<n;k++)
            {
                 int i=k+1,j=n-1;
                 while(i<j)
                 {
                     sum=(nums[i]+nums[j])%mod+(nums[k]+nums[p])%mod;
                    if( j!=k && (sum)==target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[p]});   
                        i++;
                        j--;
                    } 
                    else if(sum>target){
                        j--;
                    }
                     else{
                         i++;
                     }
                 }
            }
        }
         for(auto it:s)
         v.push_back(it);
        return v;
    }