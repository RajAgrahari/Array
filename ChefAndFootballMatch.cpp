//https://www.codechef.com/problems/WATCHFB
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
	    ll a[n][3];
	    for(ll i=0;i<n;i++)
	    cin>>a[i][0]>>a[i][1]>>a[i][2];
	    ll A=LONG_MAX,B=LONG_MAX;
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i][0]==1)
	        {
	            cout<<"YES"<<endl;
	            A = a[i][1], B = a[i][2];
	        }
	        else{
	            ll mi1 = min(a[i][1],a[i][2]);
	            ll mx1 = max(a[i][1],a[i][2]);
	            ll mi = min(A,B);
	            ll mx = max(A,B);
	            if(mi<= mi1 && mx>mi1)
	            {
	                cout<<"YES"<<endl;
	                if(mi == A)
	                {
	                    A = mi1;
	                    B = mx1;
	                }
	                else{
	                    A = mx1;
	                    B = mi1;
	                }
	            }
	            else{
	                if(a[i][1]==a[i][2])
	                {
	                    cout<<"YES"<<endl;
	                    A = a[i][1], B = a[i][2];
	                }
	                else{
	                    cout<<"NO"<<endl;
	                    A = LONG_MAX,B = LONG_MAX;
	                }
	                
	            }
	            
	        }
	    }
	}
	return 0;
}
