//https://leetcode.com/contest/weekly-contest-343/problems/first-completely-painted-row-or-column/
int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        mp[arr[i]] = i;
         int n = mat.size();
        int m = mat[0].size();
        int ans=m*n;
        for(int i=0;i<n;i++)
        {
            int idx=0;
            for(int j=0;j<m;j++)
            {
                idx = max(idx,mp[mat[i][j]]);
            }
            
            ans = min(ans,idx);
        }
        for(int i=0;i<m;i++)
        {
            int idx=0;
            for(int j=0;j<n;j++)
            {
                idx = max(idx,mp[mat[j][i]]);
            }
            ans = min(ans,idx);
        }
        return ans;
    }
