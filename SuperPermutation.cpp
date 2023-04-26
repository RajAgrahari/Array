//https://codeforces.com/contest/1822/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n&1)
        cout<<-1<<'\n';
        else
        {
            vector<ll> v;
            for(ll i=n-1;i>=1;i--)
            {
                if(i&1)
                v.push_back(i);
                else
                v.push_back(n-i);
            }
            cout<<n<<' ';
            for(ll i=0;i<v.size();i++)
            cout<<v[i]<<' ';
            cout<<'\n';
        }
    }
    return 0;
}
