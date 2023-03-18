//https://www.codechef.com/problems/MAXAGRY
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    if(k >= (n/2))
	    {
	        cout<<(n*(n-1))/2<<endl;
	    }
	    else{
	        ll ans=0;
	        
	        ans += (2*k*n)-((2*k)*(2*k+1))/2;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
