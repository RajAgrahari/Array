// https://practice.geeksforgeeks.org/problems/ad6699d4aaf84c74b119fac3b65e9ceb3fc8ef14/1
vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) 
    {
         unordered_map<int,int> mp1,mp2;
         
         for(int i=N-1;i>=0;i--)
         {
            mp1[A[i]]++;
         }
         for(int i=0;i<N;i++)
         {
             mp2[i] = mp1[A[i]];
             mp1[A[i]]--;
         }
         vector<int> ans;
         for(int i=0;i<num;i++)
         {
             int cnt=0;
             for(int j=Q[i][0];j<=Q[i][1];j++)
             {
                 if(mp2[j]==Q[i][2])
                 cnt++;
             }
             ans.push_back(cnt);
         }
         return ans;
    }
