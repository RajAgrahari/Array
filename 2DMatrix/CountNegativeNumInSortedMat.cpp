//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
 int countNegatives(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int x=n-1,y=0,ans=0;
        while(x>=0 && y<m)
        {
            while(y<m && grid[x][y]>=0)
            {
                y++;
            }
            ans += (m-y);
            x--;
        }
        return ans;


    }
