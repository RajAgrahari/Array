//https://www.codechef.com/problems/BEAUTIFULARR
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll idx=1;
	    ll sum=a[0],mi = a[0];
	    while(idx<n)
	    {
	        if(idx*a[idx] - sum <= k)
	        mi = a[idx];
	        else
	        break;
	        sum += a[idx];
	        idx++;
	    }
	    for(ll i=0;i<idx;i++)
	    {
	        k -= (mi-a[i]);
	        a[i] = mi;
	    }
	    ll avg = (k/idx);
	    ll rem = (k%idx);
	    for(ll i=0;i<idx;i++)
	    {
	       a[i] += avg;
	       if(rem)
	       {
	           rem--;
	           a[i]++;
	       }
	    }
	    ll res=0;
	    sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        res += (sum*a[i])%mod;
	        sum += a[i];
	        res = res%mod;
	        sum = sum%mod;
	    }
	    
	    cout<<res<<endl;
	    
	    
	    
	}
	return 0;
}
