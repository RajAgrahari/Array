// https://www.codechef.com/problems/BTAR
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll ans=0;
	    unordered_map<ll,ll> mp;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mp[a[i]%4]++;
	    }
	    if(mp[3]>=mp[1])
	    {
	        ans += mp[1];
	        mp[3] -= mp[1];
	        mp[1]=0;
	        ans += (mp[3]>=4)? (mp[3]/4)*3 : 0;
	        mp[3] = mp[3]%4;
	    }
	    else{
	        ans += mp[3];
	        mp[1] -= mp[3];
	        mp[3]=0;
	        ans += (mp[1]>=4)? (mp[1]/4)*3 : 0;
	        mp[1] = mp[1]%4;
	    }
	    ans += (mp[2]/2);
	    mp[2] = mp[2]%2;
	    if(mp[2] && (mp[1]==2 || mp[3]==2))
	    {
	        ans += 2;
	        cout<<ans<<endl;
	    }
	    else if(mp[2]==0 && mp[1]==0 && mp[3]==0)
	    cout<<ans<<endl;
	    else
	    cout<<-1<<endl;
	    
	}
	return 0;
}
