//https://codeforces.com/problemset/problem/1598/C
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
        double a[n];
        double avg = 0;
        map<double,double> mp;

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            avg += a[i];
            mp[a[i]]++;
        }
        avg /= (double)n;
        avg*=2;
        
        ll ans=0;
        for(ll i=0;i<n;i++)
        {    
            mp[a[i]]--;
            ans += mp[avg-a[i]];
        }
        cout<<ans<<endl;
    }
    return 0;
}
