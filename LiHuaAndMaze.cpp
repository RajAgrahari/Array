//https://codeforces.com/contest/1797/problem/A
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
        ll x,y,p,q;
        cin>>x>>y>>p>>q;

        if((x==n && y==m) || (p==n && q==m) || (x==1 && y==1) || (p==1 && q==1) || (x==1 && y==m) || (x==n && y==1) || (p==1 && q==m) || (p==n && q==1))
        cout<<"2\n";
        else if(x==n || y==m || x==1 || y==1 || p==1 || q==1 || p==n || q==m)
        cout<<"3\n";
        else
        cout<<"4\n";
    }
    return 0;
}
