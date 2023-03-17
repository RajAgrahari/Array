//https://practice.geeksforgeeks.org/problems/0960a833f70b09c59444ea487f99729929fc8910/1
long long int no_of_subarrays(int n, vector<int> &arr) 
{
     long long ans=0;
     int i=0;
     while(i<n)
     {
         int j=i;
         while(j<n && arr[j]!=1)
         {
             j++;
         }
         long long int x = (j-i);
         ans += ((x*(x+1))/2);
         i=j;
         i++;
     }
     return ans;
}
