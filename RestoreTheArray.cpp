//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

int main()
{
    NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        ll b[n+1];
        b[0] = a[0];
        b[n] = a[n-1];
        for(ll i=1;i<n;i++)
        b[i] = min(a[i],a[i-1]);

        for(int x:b)
        cout<<x<<' ';
        cout<<'\n';
        
        
       
    }
    return 0;
}
