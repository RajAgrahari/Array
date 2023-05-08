//https://leetcode.com/problems/matrix-diagonal-sum/description/
int diagonalSum(vector<vector<int>>& mat) 
    {
        int sum = 0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            sum += mat[i][i];
        }
        for(int i=0;i<n;i++)
        {
            sum += mat[i][n-i-1];
        }
        if(n&1)
        sum -= mat[(n/2)][(n/2)];
        return sum;
    }
