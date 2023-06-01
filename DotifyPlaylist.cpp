//https://www.codechef.com/problems/DOTIFYPLAY
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k,l;
	    cin>>n>>k>>l;
	    vector<ll> v;
	    for(ll i=0;i<n;i++)
	    {
	        ll x,y;
	        cin>>x>>y;
	        if(y==l)
	        v.push_back(x);
	    }
	    sort(v.rbegin(),v.rend());
	    if(v.size()<k)
	    {
	        cout<<"-1\n";
	        continue;
	    }
	    ll sum=0;
	    for(ll i=0;i<k && i<v.size();i++)
	    {
	        sum += v[i];
	    }
	    cout<<sum<<'\n';
	}
	return 0;
}
