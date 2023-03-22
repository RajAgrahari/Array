//https://www.codechef.com/problems/DELISH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



ll solve(vector<ll> & arr,ll n)
{
    vector<ll>prefix(n,0);
        
        ll j=0;
        ll curr=0;
        ll res=INT_MIN;
        while(j<n)
        {
            curr+=arr[j];
            res=max(res,curr);
            if(curr<0)
            curr=0;
            prefix[j]=res;
            j++;
        }
        
        
        vector<ll> suffix(n,0);
        curr=0;
        res=INT_MAX;
        j=n-1;
        while(j>=0)
        {
            curr+=arr[j];
            res=min(res,curr);
            if(curr>0)
            {
                curr=0;
            }
            suffix[j]=res;
            j--;
        }
        
        ll ans=INT_MIN;
        
        for(ll i=1;i<n;i++)
        {
            ll x=abs(prefix[i-1]-suffix[i]);
            ans=max(ans,x);
        }
    return ans;
    
}

int main() {
    ll t;
    cin>>t;
    while(t>0)
    {
        
        ll n;
        cin>>n;
        vector<ll> arr(n,0);
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        
        ll ans=solve(arr,n);
        reverse(arr.begin(),arr.end());
        ans=max(ans,solve(arr,n));
        cout<<ans<<endl;
        

        t--;
    }

    return 0;
}
