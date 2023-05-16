//https://codeforces.com/problemset/problem/1713/C
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
        ll x = n;
        ll r = sqrt(x);
        if((r*r) != x)
        r = r+1;
        vector<ll> v(n);
        ll idx = n-1;
        while(idx>=0)
        {
            ll it = r*r - idx;
            for(int i=it;i<=idx;i++)
            {
                v[i] = r*r - i;
            }
            idx = (it-1);
            r = sqrt(idx);
            if(r*r != idx)
            r = r+1;
        }
        for(ll i=0;i<n;i++)
        cout<<v[i]<<' ';
        cout<<'\n';
    }
    return 0;
}
