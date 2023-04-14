//https://www.codechef.com/problems/CHFADJSUM
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
	    for(ll i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    int slast = a[n-2];
	    int cnt=0;
    	    for(ll i=0;i<n;i++)
    	    {
    	        if(slast==a[i])
    	        cnt++;
    	    }
	    if(a[n-1]==a[n-2])
	    {
	        
    	    if(cnt>((n+1)/2))
    	    cout<<"NO"<<endl;
    	    else
    	    cout<<"YES"<<endl;
	    }
	    else{
	         if(cnt<(n-1))
	         cout<<"YES"<<endl;
	         else
	         cout<<"NO"<<endl;
	    }
	    
	    
    }
	return 0;
}
