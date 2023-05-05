//https://codeforces.com/contest/1799/problem/B
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
        int cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            cnt++;
        }
        if(cnt!=0 && cnt<n)
        {
            cout<<-1<<'\n';
            continue;
        }
        vector<pair<ll,ll>> vp;
        while(true)
        {
            bool f = false;
            ll idx=0,mi=a[0];
            for(ll i=1;i<n;i++)
            {
                if(a[i]<mi)
                {
                    mi = a[i];
                    idx=i;
                }
            }
            
            for(ll i=0;i<n;i++)
            {
                if(a[i]!=mi)
                {
                    f=true;
                    vp.push_back({i+1,idx+1});
                    a[i] = ceil((double)a[i]/mi);
                }
            }
            if(f==false)
            break;
        }
        cout<<vp.size()<<'\n';
        for(ll i=0;i<vp.size();i++)
        {
            cout<<vp[i].first<<' '<<vp[i].second<<'\n';
        }

    }
    return 0;
}
