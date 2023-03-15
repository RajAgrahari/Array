//https://practice.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1
long long mod = 1000000007;
long long int findMaxProduct(vector<int>&a, int n)
    {
         sort(a.begin(),a.end());
         int neg=0,z=0;
         for(int i=0;i<n;i++)
         {
             if(a[i]<0)
             neg++;
             if(a[i]==0)
             z++;
         }
         long long ans=1;
         int limit = (neg%2)?neg-1:neg;
         if(n-neg-z > 0)
         {
             for(int i=n-1;i>=0;i--)
             {
                 if(a[i]>0)
                 ans = (ans*a[i])%mod;
                 else
                 break;
             }
             for(int i=0;i<limit;i++)
             ans = (ans*a[i])%mod;
         }
         else if(n==neg)
         {
             if(neg!=1)
             {
                 for(int i=0;i<limit;i++)
                 ans = (ans*a[i])%mod;
             }
             else
             return a[n-1];
         }
         else if(n==z)
         return 0;
         else{
             if(neg!=1)
             {
                 for(int i=0;i<limit;i++)
                 ans = (ans*a[i])%mod;
             }
             else
             return 0;
            
         }
         return ans;
    }
