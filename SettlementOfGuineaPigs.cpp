//https://codeforces.com/contest/1802/problem/B
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
            
            ll i=0,cnt=0,tot=0,ans=0;
            while(i<n)
            {
                ll j=i;
                while(i<n && a[i]==1)
                {
                   i++;
                }
                ans = max(ans,cnt+(i-j));
                tot += (i-j);
                cnt = (tot==0)?0:(tot/2)+1;
                i++;
            }
            if(tot==0)
            cout<<0<<'\n';
            else
            cout<<ans<<'\n';
    }
    return 0;
}
