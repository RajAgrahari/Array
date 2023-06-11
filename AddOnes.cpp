//https://practice.geeksforgeeks.org/problems/adding-ones3628/1
void update(int a[], int n, int updates[], int k)
    {
        vector<int> cnt(n,0);
        for(int i=0;i<k;i++)
        {
            cnt[updates[i]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(i>0)
            cnt[i] += cnt[i-1];
            a[i] = cnt[i];
        }
    }
