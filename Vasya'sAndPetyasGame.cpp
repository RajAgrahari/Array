//https://codeforces.com/contest/577/problem/C
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
    ll n;
    cin>>n;
    vector<bool> prime(n+1,true);
    vector<ll> ans;

    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
               prime[j] = false;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(prime[i])
        ans.push_back(i);
    }
    vector<ll> res;
    for(ll i=0;i<ans.size();i++)
    {
        ll j = ans[i];
        // ll cnt=0;
        while(j<=n)
        {
            res.push_back(j);
            // cnt++;
            j = j*ans[i];
        }
        // if(cnt>2)
        // {
        //     ll temp = res.back();
        //     res.pop_back();
        //     res.pop_back();
        //     res.push_back(temp);
        // }
    }
    cout<<res.size()<<'\n';
    for(ll x:res)
    cout<<x<<' ';
    cout<<'\n';

    return 0;
}
