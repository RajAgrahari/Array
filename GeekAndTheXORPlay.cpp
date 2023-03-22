//https://practice.geeksforgeeks.org/contest/job-a-thon-18-hiring-challenge/problems/
vector<long long int> xorPairs(int N, vector<int> &A1, vector<int> &A2, int Q, vector<vector<int>> &query) 
    {
         vector<long long int> ans;
         
         vector<vector<int>> pre1(30,vector<int>(N+1,0));
         vector<vector<int>> pre2(30,vector<int>(N+1,0));
         
         for(int j=0;j<30;j++)
         {
             for(int i=0;i<N;i++)
             {
                 if(A1[i]&(1<<j))
                 pre1[j][i+1] = pre1[j][i]+1;
                 else
                 pre1[j][i+1] = pre1[j][i];
                 if(A2[i]&(1<<j))
                 pre2[j][i+1] = pre2[j][i]+1;
                 else
                 pre2[j][i+1] = pre2[j][i];
                 
             }
         }
         
         for(int i=0;i<Q;i++)
         {
             int k = query[i][0]-1;
             int l1 = query[i][1];
             int r1 = query[i][2];
             int l2 = query[i][3];
             int r2 = query[i][4];
             long long x = pre1[k][r1] - pre1[k][l1-1];
             long long y = pre2[k][r2] - pre2[k][l2-1];
             long long nx = (r1-l1+1)-x;
             long long ny = (r2-l2+1)-y;
             ans.push_back((x*ny)+(y*nx));
         }
        //  reverse(ans.begin(),ans.end());
         return ans;
         
    }
