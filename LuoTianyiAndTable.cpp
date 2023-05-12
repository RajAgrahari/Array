//https://codeforces.com/contest/1825/problem/C
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
        ll n,m;
        cin>>n>>m;
        ll b[n*m];
        for(ll i=0;i<n*m;i++)
        cin>>b[i];
        sort(b,b+(n*m));
        ll x = b[n*m - 1]-b[0];
        ll y;
        y = max(b[n*m-1]-b[1],b[n*m-2]-b[0]);
        if(m>n)
        {
            cout<<x*n*(m-1)+(n-1)*y<<'\n';
        }
        else
        cout<<x*(n-1)*m+(m-1)*y<<'\n';
    }
    return 0;
}
