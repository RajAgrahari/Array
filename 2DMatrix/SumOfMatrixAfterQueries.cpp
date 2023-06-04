//https://leetcode.com/problems/sum-of-matrix-after-queries/description/
long long matrixSumQueries(int n, vector<vector<int>>& queries) 
    {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        int m = queries.size();
        long long ans=0;
        for(int i = m-1;i>=0;i--)
        {
            if(queries[i][0]==1 && col.count(queries[i][1])==0)
            {
                int size = row.size(); 
                ans += ((long long)queries[i][2]*(n-size));
                col[queries[i][1]]++;
            }
            if(queries[i][0]==0 && row.count(queries[i][1])==0)
            {
                int size = col.size(); 
                ans += ((long long)queries[i][2]*(n-size));
                row[queries[i][1]]++;
            }
        }
        return ans;
    }
