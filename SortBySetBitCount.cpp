// https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1
int countSetbits(int n)
    {
        if(n==0)
        return 0;
        int cnt=0;
        while((n&(n-1)))
        {
            cnt++;
            n = (n&(n-1));
        }
        return cnt;
    }
    static int cmp(int a,int b)
    {
        Solution obj;
        int x = obj.countSetbits(a);
        int y = obj.countSetbits(b);
        return (x>y);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,cmp);
    }
