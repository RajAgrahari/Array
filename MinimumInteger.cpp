//https://practice.geeksforgeeks.org/problems/1ccf56f107bcb24242469ea45c02f852165a2184/1
int minimumInteger(int N, vector<int> &A) {
        
        long long sum=0;
        for(int i=0;i<N;i++)
        {
            sum += A[i]; 
        }
        int mi=*max_element(A.begin(),A.end());
        for(int i=0;i<N;i++)
        {
            if(sum<=((long long)N*(long long)A[i]))
            mi = min(mi,A[i]);
        }
        return mi;
    }
