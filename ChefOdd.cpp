//https://www.codechef.com/problems/CHEFODD
#include <iostream>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    if((n/2)<k)
	    {
	        cout<<"NO\n";
	    }
	    else{
	        ll o = (n/2) + (n%2);
	        if((o&1) == (k&1))
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	    }
	}
	return 0;
}
