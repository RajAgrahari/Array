//https://codeforces.com/contest/1833/problem/C
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
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if((a[i]&1) == 0)
            cnt++;
        }
        ll mi = *min_element(a,a+n);
        if(mi&1 || cnt==n)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}
