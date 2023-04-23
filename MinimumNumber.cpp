//https://practice.geeksforgeeks.org/problems/7d62c8606123a199720c9b6885249dc9ac651bb7/1
int minimumNumber(int n,vector<int> &arr)
    {
        int g=arr[0];
        for(int i=1;i<n;i++)
        {
            g = __gcd(g,arr[i]);
        } 
        return g;
    }
