//https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1
string kthPermutation(int n, int k)
    {
         int myints[n];
         for(int i=0;i<n;i++)
         myints[i] = i+1;
         k--;
        while(k--)
        next_permutation(myints,myints+n);
        
        string ans;
        for(int x:myints)
        ans += (x+'0');
        return ans;
    }
