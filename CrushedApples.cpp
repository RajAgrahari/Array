//https://www.codechef.com/problems/APP_BAL_SCA?tab=statement
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>m>>n;
	    if(n==m)
	    cout<<"YES\n";
	    else if(m&1 || (n>m))
	    cout<<"NO\n";
	    else{
	        ll temp = m;
	        while((temp%2)==0)
	        {
	            temp /= 2;
	        }
	        
            if(n%temp == 0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
	        
	    }
	}
	return 0;
}
