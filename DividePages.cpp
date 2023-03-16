//https://www.codechef.com/problems/BOOKPAGES
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
	    ll sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum += a[i];
	    }
	    bool f=false;
	    for(ll i=0;i<n;i++)
	    {
	        if((a[i]%2) == ((sum-a[i])%2))
	        {
	            f=true;
	            break;
	        }
	    }
	    if(f)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
