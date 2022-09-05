#include<bits/stdc++.h>
using namespace std;
//Number of subarrays
int subarraySum(vector<int>& nums, int k) 
{
    int count=0;
    int cursum=0;
    unordered_map<int,int> mp;
    mp[cursum]=1;
    for(int i=0; i<nums.size();i++)
    {
        cursum+=nums[i];
        
        if(mp.find(cursum-k)!=mp.end())
        count+=mp[cursum-k];
        
        mp[cursum]++;
        
    }
    return count;
}
//Subarray length
vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long curSum=0;
        int start=1,end=-1;
        unordered_map<long long,int> mp;
        for(int i=0;i<n;i++)
        {
            curSum+=arr[i];
            if((curSum-s)==0)
            {
                start=1;
                end=i+1;
                break;
            }
            if(mp.find(curSum-s)!= mp.end())
            {
                start=mp[curSum-s]+2;
                end=i+1;
                break;
            }
            mp.insert(pair<long long,int>(curSum,i));
        }
        if(end==-1)
        return {end};
        else
        return {start,end};
        
    }
// for sorted_array
vector<int> subarraySum2(int arr[], int n, long long s)
    {
        vector<int> res;
       long long sum=0;
       int i=0,j=0;
       for(int k=0;k<=n;++k){
           sum+=arr[k];
           
           while(sum>s){
               sum-=arr[i];
               ++i;
           }
           if(sum==s){
               j=k;
               res.push_back(i+1);
               res.push_back(j+1);
               
               return res;
           }
       }
       if(res.empty()){
           res.push_back(-1);
       }
       return res;
   }

int main()
{
    int arr[]={1,2,3,7,5};
    vector<int> v;
    v = subarraySum(arr,5,12);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}