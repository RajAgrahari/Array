//https://codeforces.com/contest/479/problem/B
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
    
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back({x,i+1});
        }
        if(n==1)
        {
            cout<<"0 0\n";
        }
        else{
            sort(v.begin(),v.end());
            // ll ans=INT_MAX;
             
             vector<pair<ll,ll>> res;
            for(ll i=0;i<k;i++)
            {
                ll x = v[0].first;
                ll y = v[n-1].first;
                    if(y!=x)
                    res.push_back({v[n-1].second,v[0].second});
                    else
                    break;
                    v[0].first++;
                    v[n-1].first--;
                    sort(v.begin(),v.end());
            }
        
            cout<<v[n-1].first - v[0].first<<' '<<res.size()<<'\n';
            for(ll i=0;i<res.size();i++)
            {
                cout<<res[i].first<<' '<<res[i].second<<'\n';
            }
        }
        
    return 0;
}
