//https://practice.geeksforgeeks.org/problems/6f08220ca3b871be594f50f7f56a9ef2799cb485/1
long long helper(int N,vector<int> A,int M)
    {
        int arr[2*N+1] = {0};
         long long cur = N,tot = 0,ans = 0;
         arr[(int)cur]++;
         for(int i=0;i<N;i++)
         {
             int x = -1;
             if(A[i] >= M)
             x = 1;
             
             if(x == -1)
             tot -= arr[(int)cur + x];
             else
             tot += arr[(int)cur];
             
             cur += x;
             ans += tot;
             arr[(int)cur]++; 
         }
         return ans;
    }
    long long countSubarray(int N,vector<int> A,int M) 
    {
         return helper(N,A,M) - helper(N,A,M+1);
    }
