//https://codeforces.com/problemset/problem/1762/B
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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<n<<'\n';
        for(ll i=0;i<n;i++)
        {
            ll x = pow(2,ceil(log2(a[i])));
            cout<<i+1<<' '<<x-a[i]<<'\n';
        }

    }
    return 0;
}
