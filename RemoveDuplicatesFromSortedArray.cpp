//https://leetcode.com/problems/remove-duplicates-from-sorted-array
int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
          s.insert(nums[i]);
        }
        nums.clear();
        for(auto it=s.begin();it!=s.end();it++)
        {
           nums.push_back(*it);
        }
        return s.size();
    }
