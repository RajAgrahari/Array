//https://codeforces.com/contest/1839/problem/C
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
        {
            cin>>a[i];
        }
        if(a[n-1]==1)
        cout<<"NO\n";
        else{
            vector<ll> ans;
            cout<<"YES\n";
            for(ll i=n-1;i>=0;i--)
            {
                int j=i;
                while(i>=0 && a[i]==1)
                {
                    ans.push_back(0);
                    i--;
                }
                if(j!=i)
                {
                    ans.pop_back();
                    ans.push_back(j-i);
                }
                if(i>=0)
                ans.push_back(0);
            }
            for(ll x:ans)
            cout<<x<<' ';
            cout<<'\n';
        }

    }
    return 0;
}
