//https://codeforces.com/problemset/problem/1312/B
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
       cin>>a[i];
       sort(a,a+n);
       reverse(a,a+n);
       for(ll i=0;i<n;i++)
       cout<<a[i]<<' ';
       cout<<'\n';
    }
    return 0;
}
