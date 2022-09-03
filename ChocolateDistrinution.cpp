// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
    long long findMinDiff(vector<long long> a, long long n, long long m){
          sort(a.begin(),a.end());
          long long mindiff=a[n-1]-a[0];
          if(n<m)
          return -1;
          for(long long i=0;i<n-m+1;i++)
          {
              mindiff=min(mindiff,a[i+m-1]-a[i]);
          }
          return mindiff;
    }   