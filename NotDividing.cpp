//https://codeforces.com/contest/1794/problem/B
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
            if(a[i]==1)
            a[i]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(i>0 && (a[i]%a[i-1])==0)
            a[i]++;
        }
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
