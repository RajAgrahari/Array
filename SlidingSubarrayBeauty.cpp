//https://leetcode.com/problems/sliding-subarray-beauty/
void check(vector<int>& res,int x,unordered_map<int,int>& mp)
    {
        int temp=x;
        for(int j=-50;j<0;j++)
        {
            if(mp[j]>0)
            temp -= mp[j];
            if(temp<=0)
            {
                res.push_back(j);
                break;
            }
        }
        if(temp>0)
        res.push_back(0);
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) 
    {
         vector<int> res;
         deque<int> q;
         unordered_map<int,int> mp;
         int n = nums.size();
    
        for(int i=0;i<k;i++)
        {
            if(nums[i]<0)
            mp[nums[i]]++;
            q.push_back(i);
        }
        check(res,x,mp);
        for(int i=k;i<n;i++)
        {
            if(!q.empty() && q.front()<=(i-k))
            {
                mp[nums[q.front()]]--;
                q.pop_front();
            }
            if(nums[i]<0)
            mp[nums[i]]++;
            q.push_back(i);
            check(res,x,mp);
        }
        return res;
    }
