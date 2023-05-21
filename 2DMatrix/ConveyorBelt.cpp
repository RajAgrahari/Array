//https://codeforces.com/contest/1811/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll solve(ll x,ll y,ll n)
{
        ll nx = abs(n-x)+1;
        ll ny = abs(n-y)+1;
        return min(x,min(y,min(nx,ny)));
}
int main()
{
NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,p,q;
        cin>>n>>x>>y>>p>>q;
        ll p1 = solve(x,y,n);
        ll p2 = solve(p,q,n);
        cout<<abs(p1-p2)<<'\n';
    }
    return 0;
}
