//https://www.codechef.com/problems/RCT
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    if((n&1) && (m&1))
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
