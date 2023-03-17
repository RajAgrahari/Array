//https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1
int maxLen(int arr[], int N)
    {
        unordered_map<int,int> mp;
         for(int i=0;i<N;i++)
         {
             if(arr[i]==0)
             arr[i] = -1;
         }
         int ans = INT_MIN,sum=0;
         for(int i=0;i<N;i++)
         {
             sum += arr[i];
             if(sum==0)
             ans = max(ans,i+1);
             if(sum!=0 && mp.find(sum)!=mp.end())
             ans = max(ans,(i-mp[sum]+1));
             if(mp.find(sum)==mp.end())
             mp[sum] = i+1;
         }
         return ans==INT_MIN?0:ans;
    }
