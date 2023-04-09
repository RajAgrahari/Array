//https://leetcode.com/contest/weekly-contest-340/problems/sum-of-distances/
vector<long long> distance(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        vector<long long> ans(n);
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(((it->second).size())>1)
            {
                int x = it->second[0];
                long long next=0;
                long long prev=0,cp=0,cn=(it->second.size()-1);
                for(int j=1;j<(it->second).size();j++)
                {
                    next += (it->second[j]-x);
                }
                cp++;
                cn--;
                ans[x] = next;
                for(int j=1;j<(it->second).size();j++)
                {
                    long long temp = ((it->second[j])-(it->second[j-1]));
                    prev = prev + (temp*cp);
                    next = next - (temp*(cn+1));
                    ans[it->second[j]] = prev + next;
                    cp++;
                    cn--;
                }
            }
            else
            ans[it->second[0]] = 0;
        }
        return ans;
        
        
    } 
