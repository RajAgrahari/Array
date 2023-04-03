//https://codeforces.com/problemset/problem/1810/C
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
        ll n,c,d;
        cin>>n>>c>>d;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ll cost = 0;
        ll mi=(n*c)+d;
        vector<ll> v;
        if(a[0]!=1)
        {
            v.push_back(1);
            cost = d;
        }
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            {
                cost += c;
                continue;
            }
            v.push_back(a[i-1]);
        }
        v.push_back(a[n-1]);
        for(ll i=1;i<v.size();i++)
        {
            ll diff = v[i]-v[i-1]-1;
            if(diff==0)
            continue;
            ll cost_c = (v.size()-i)*c;
            mi = min(mi,cost+cost_c);
            cost += (diff*d);
        }
        mi = min(mi,cost);
        cout<<mi<<endl;

    }
    return 0;
}
