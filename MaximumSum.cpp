//https://codeforces.com/contest/1832/problem/B
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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        sort(a,a+n);
        ll pre[n+1]={0};
        pre[0] = 0;
        for(ll i=1;i<=n;i++)
        {
            pre[i] = pre[i-1]+a[i-1];
        }
        ll sum=pre[n];
        ll ans=pre[n-k];
        for(ll i=1;i<=k;i++)
        {
            ans = max(ans,sum-(pre[2*i]+(sum-pre[n-(k-i)])));
            
        }
        cout<<ans<<'\n';
    }
    return 0;
}
