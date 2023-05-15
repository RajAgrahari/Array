//https://codeforces.com/contest/1828/problem/B
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
        ll g=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            g = __gcd(g,abs(a[i]-(i+1)));
        }
        cout<<g<<endl;

    }
    return 0;
}
