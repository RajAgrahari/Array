//https://codeforces.com/contest/1829/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
bool solve(ll n,ll m)
{
    if(n==m)
    return true;
    if((n==0) || (n%3 != 0))
    return false;
    ll x = (n/3);
    return (solve(x,m) || solve(2*x,m));
}
int main()
{
   NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES\n";
            continue;
        }
        if(n<m)
        {
            cout<<"NO\n";
            continue;
        }
            if(solve(n,m)==true)
            cout<<"YES\n";
            else
            cout<<"NO\n";
    }
    return 0;
}
