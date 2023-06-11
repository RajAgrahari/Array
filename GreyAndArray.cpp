//https://codeforces.com/contest/296/problem/C
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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<vector<ll>> op(m);
        vector<ll> cnt1(n+1,0);
        vector<ll> cnt2(m+1,0);
        ll a[n];

        for(ll i=0;i<n;i++)
        cin>>a[i];

        for(ll i=0;i<m;i++)
        {
            ll x,y,z;
            cin>>x>>y>>z;
            x--,y--;
            op[i].push_back(x);
            op[i].push_back(y);
            op[i].push_back(z);
        }
        for(ll i=0;i<k;i++)
        {
            ll x,y;
            cin>>x>>y;
            x--,y--;
            cnt2[x]++;
            cnt2[y+1]--;
        }
        for(ll i=1;i<=m;i++)
        {
           cnt2[i] += cnt2[i-1];
        }
        for(ll i=0;i<m;i++)
        {
            cnt1[op[i][0]] += (op[i][2]*cnt2[i]); 
            cnt1[op[i][1]+1] -= (op[i][2]*cnt2[i]); 
        }
        // cout<<cnt1[0]<<' ';
        for(ll i=1;i<=n;i++)
        {
            cnt1[i] += cnt1[i-1];
            // cout<<cnt1[i]<<' ';
        }
        // cout<<'\n';
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]+cnt1[i]<<' ';
        }
        cout<<'\n';
    return 0;
}
