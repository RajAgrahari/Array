//https://practice.geeksforgeeks.org/problems/array-removals/1
int removals(vector<int>& arr, int k)
    {
        sort(arr.begin(),arr.end());

        int ans=INT_MAX,n=arr.size();

        for(int i=0;i<n;++i){

            auto it=upper_bound(arr.begin(),arr.end(),arr[i]+k);

            int id=it-arr.begin();

            ans=min(ans,i+n-id);

        }
        return ans;
    }
