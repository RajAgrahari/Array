//https://codeforces.com/problemset/problem/1790/D
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
        map<ll,ll> mp;
        set<ll> st;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            st.insert(x);
            mp[x]++;
        }
        mp[0]=0;
        ll ans=0;
        for(auto it:st)
        {
            if(mp[it]>mp[it-1])
            ans += (mp[it]-mp[it-1]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
