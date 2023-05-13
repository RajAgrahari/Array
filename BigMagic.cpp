//https://practice.geeksforgeeks.org/problems/ed0422e992899f3f46340ce97b0090683ceebd67/1
int bitMagic(int n, vector<int> &arr) 
    {
        int cnt=0;
        for(int i=0;i<(n/2);i++)
        {
            if(arr[i]!=arr[n-i-1])
            {
               cnt++;
            }
        }
        return ceil((double)cnt/2);
    }
