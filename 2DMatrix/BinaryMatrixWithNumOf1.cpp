//https://practice.geeksforgeeks.org/problems/77e1c3e12cd148f835d53eb168d4472b2ff539fa/1
vector<int> findMaxRow(vector<vector<int>> mat, int N) {
         vector<int> ans(2,0);
         int i=0,j=N-1;
         while(i<N && j>=0)
         {
             while(j>=0 && mat[i][j]==1)
             {
                 j--;
             }
             if(ans[1] < (N-j-1))
             {
                 ans[0] = i;
                 ans[1] = N-j-1;
             }
             i++;
         }
         return ans;
    }
