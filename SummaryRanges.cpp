//https://leetcode.com/problems/summary-ranges/description/
vector<string> summaryRanges(vector<int>& nums) 
    {
        int n = nums.size();
        vector<string> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
             string s = to_string(nums[i]);
             int j = i;
             while(i+1<n && nums[i]==(nums[i+1]-1))
             {
                 i++;
             }
             if(i<n && i!=j)
             {
                 s += "->";
                 s += to_string(nums[i]);
             }
             ans.push_back(s);
        }
        return ans;
    }
