// https://leetcode.com/problems/game-of-life/
 int neighbourcheck(vector<vector<int>> board,int i,int j)
    {
        int n = board.size();
        int m = board[0].size();
        int count=0;
        vector<int> row = {i+1,i+1,i+1,i-1,i-1,i-1,i,i};
        vector<int> col = {j,j+1,j-1,j,j+1,j-1,j-1,j+1};
        for(int k=0;k<8;k++)
        {
            if(row[k]>=0 && row[k]<n && col[k]>=0 && col[k]<m && board[row[k]][col[k]]==1)
            count++;
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> grid(n,vector<int>(m));
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                c = neighbourcheck(board,i,j);
                if(board[i][j]==1)
                {
                    if(c<2)
                    grid[i][j]=0;
                    else if(c==2 || c==3)
                    grid[i][j]=1;                
                    else if(c>3)
                    grid[i][j]=0;
                }   
                else{
                    if(c==3)
                    grid[i][j]=1;
                }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board[i][j]=grid[i][j];
            }
        }
    }