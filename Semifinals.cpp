//https://codeforces.com/contest/378/problem/B
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
    ll n;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll>(2));
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        if(i<(n/2))
        {
            mp[a[i][0]]=1;
            mp[a[i][1]]=1;
        }
        v.push_back(a[i][0]);
        v.push_back(a[i][1]);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    mp[v[i]]=1;

    string s1,s2;
    for(ll i=0;i<n;i++)
    {
        if(mp[a[i][0]]==1)
        s1 += '1';
        else
        s1 += '0';
        if(mp[a[i][1]]==1)
        s2 += '1';
        else
        s2 += '0';
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
