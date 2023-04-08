//https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/
int minSwaps(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            int idx=-1;
            for(int j=i;j<n;j++)
            {
                int cnt=0;
                for(int k=n-1;k>=0;k--)
                {
                    if(grid[j][k]==0)
                    cnt++;
                    else
                    break;
                }
                if(cnt>=(n-i-1))
                {
                    ans += (j-i);
                    idx=j;
                    break;
                }
            }
            if(idx==-1)
            return -1;
            else{
                for(int j=idx;j>=1;j--)
                {
                    for(int k=0;k<n;k++)
                    {
                        int temp = grid[j-1][k];
                        grid[j-1][k] = grid[j][k];
                        grid[j][k] = temp;
                    }
                }
            }
        }
        return ans;
    }