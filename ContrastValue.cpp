//https://codeforces.com/contest/1832/problem/C
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
        unordered_map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll cnt=2;
        if(mp.size()==1)
        cout<<1<<'\n';
        else{
            ll p = a[0];
            for(ll i=1;i<n-1;i++)
            {
               if((p<=a[i] && a[i]<=a[i+1]) || (p>=a[i] && a[i]>=a[i+1]))
               {
                 continue;
               }
               else{
                  cnt++;
                  p=a[i];
               }
            }
            cout<<cnt<<'\n';
        }
    }
    return 0;
}
