//https://www.codechef.com/problems/MEX_ARRAY
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll cnt[n+1];
	    memset(cnt,0,sizeof(cnt));
	   
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	    vector<ll> ans;
	    ll size = cnt[0];
	    for(int i=0;i<size;i++)
	    {
	        ll x = 0;
	        while(cnt[x]!=0)
    	    {
    	       cnt[x]--;
    	       x++;
    	    }
    	    ans.push_back(x);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(cnt[a[i]]>0)
	        {
	            ans.push_back(0);
	            cnt[a[i]]--;
	        }
	    }
	    cout<<ans.size()<<'\n';
	    for(ll x:ans)
	    cout<<x<<' ';
	    cout<<'\n';
	    
	}
	return 0;
}
