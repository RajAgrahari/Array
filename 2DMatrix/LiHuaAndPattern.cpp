//https://codeforces.com/contest/1797/problem/B
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
        ll n,k;
        cin>>n>>k;
        ll a[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        ll cnt=0;
        for(ll i=0;i<(n/2);i++)
        {
            for(ll j=0;j<n;j++)
            {
               if(a[i][j]!=a[n-i-1][n-j-1])
               cnt++;
            }
        }
        if(n&1)
        {
            for(ll i=0;i<(n/2);i++)
            {
                if(a[n/2][i]!=a[n/2][n-i-1])
                cnt++;
            }
        }
        if(cnt>k)
        cout<<"NO\n";
        else{
            if(n&1)
            cout<<"YES\n";
            else if((k-cnt)&1)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        
    }
    return 0;
}
