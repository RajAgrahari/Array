//https://codeforces.com/problemset/problem/1823/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

void countTotalPrimeFactors(ll n,unordered_map<ll,ll>& mp)
{
     while (n % 2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
 
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }

    if (n > 2)
    mp[n]++;
}
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
            countTotalPrimeFactors(a[i],mp);
        }
        
        ll ans=0,cnt=0;
        for(auto it:mp)
        {
            ans += (it.second)/2;
            cnt += (it.second)%2;
        }
        cout<<ans+(cnt/3)<<'\n';
    }
    return 0;
}
