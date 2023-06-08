//https://www.codechef.com/problems/REMOSET
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll n,ll p)
{
    if(p==0)
    return 1;
    ll ans = power(n,p/2)%mod;
    ans = (ans*ans)%mod;
    if((p%2) == 1)
    return (ans*n)%mod;
    return (ans%mod);
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll o=0,e=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if((a[i]&1) == 0)
	        e++;
	        else
	        o++;
	    }
	    if(o)
	    cout<<power(2,e)<<'\n';
	    else
	    cout<<power(2,e)-1<<'\n';
	    
	}
	return 0;
}
