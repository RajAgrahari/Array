//https://www.codechef.com/problems/MUSROD
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
	   
	   ll a[n],b[n];
	   for(ll i=0;i<n;i++)
	   cin>>a[i];
	   for(ll i=0;i<n;i++)
	   cin>>b[i];
	   
	   vector<pair<double,ll>> vp;
	   
	   for(ll i=0;i<n;i++)
	   {
	       double k = ((double)b[i]/(double)a[i]);
	       vp.push_back({k,i});
	   }
	   
	   
	   sort(vp.begin(),vp.end());
	   
	   ll ans = 0,x=0;
	   for(ll i=0;i<n;i++)
	   {
	       int idx = vp[i].second;
	       ans += (b[idx]*x);
	       x += a[idx];
	   }
	   cout<<ans<<endl;
	   
	}
	return 0;
}
