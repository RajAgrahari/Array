//https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1
int dominantPairs(int n,vector<int> &arr)
    {
        sort(arr.begin(),arr.begin()+(n/2));
        sort(arr.begin()+(n/2),arr.end());
        int i = (n/2)-1;
        int j = n-1;
        int ans=0;
        while(i>=0 && j>=(n/2))
        {
            while(j>=(n/2) && i>=0 && arr[i]<5*arr[j])
            j--;
            ans += (j-(n/2)+1);
            i--;
        }
        return ans;
    }  
