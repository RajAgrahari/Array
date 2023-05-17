//https://codeforces.com/problemset/problem/1671/C
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
        ll n,x;
        cin>>n>>x;
        ll a[n];

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll pre[n];
        pre[0] = a[0];
        for(ll i=1;i<n;i++)
        {
            pre[i] = pre[i-1]+a[i];
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
             if(x>=pre[i])
             {
                ans += (x-pre[i])/(i+1);
                ans += 1;
             }
             else
             break;
        }
        cout<<ans<<endl;

    }
    return 0;
}
