//https://leetcode.com/problems/equal-row-and-column-pairs/description/
int equalPairs(vector<vector<int>>& grid) 
    {
        unordered_map<string,int> r;
        unordered_map<string,int> c;
        int n = grid.size();

        for(int i=0;i<n;i++)
        {
            string temp;
            for(int j=0;j<n;j++)
            {
                temp += to_string(grid[i][j]);
                temp += '#';
            }
            r[temp]++;
        }

        for(int i=0;i<n;i++)
        {
            string temp;
            for(int j=0;j<n;j++)
            {
                temp += to_string(grid[j][i]);
                temp += '#';
            }
            c[temp]++;
        }
        int ans=0;
        for(auto it:r)
        {
            if(c.count(it.first)!=0)
            {
                ans += (c[it.first]*it.second);
            }
        }
        return ans;
    }
