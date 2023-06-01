//https://www.codechef.com/problems/MAXSUMPERM
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,q;
	    cin>>n>>q;
	    vector<ll> a(n);
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    
	    vector<ll> cnt(n+2,0);
	    for(ll i=0;i<q;i++)
	    {
	        ll l,r;
	        cin>>l>>r;
	        cnt[l] += 1;
	        cnt[r+1] -= 1;
	    }
	    
	    vector<pair<ll,ll>> vp;
	    for(ll i=1;i<n+1;i++)
	    {
	        cnt[i] += cnt[i-1];
	        vp.push_back({cnt[i],i});
	    }
	    sort(vp.rbegin(),vp.rend());
	    sort(a.rbegin(),a.rend());
	    vector<ll> ans(n+1);
	    ll x=0;
	    for(ll i=0;i<vp.size();i++)
	    {
	        ans[vp[i].second] = a[i];
	        x += (vp[i].first*a[i]);
	    }
	    cout<<x<<'\n';
	    for(ll i=1;i<=n;i++)
	    cout<<ans[i]<<' ';
	    cout<<'\n';
	}
	return 0;
}
