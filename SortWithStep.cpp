//https://codeforces.com/contest/1823/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
void swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        unordered_map<ll,vector<ll>> mp;
        for(ll i=0;i<n;i++)
        {
            mp[i%k].push_back(a[i]);
        }
        vector<ll> p(n);
        for(auto& it:mp)
        sort(it.second.rbegin(),it.second.rend());

        for(ll i=0;i<n;i++)
        {
            p[i] = mp[i%k].back();
            mp[i%k].pop_back();
        }
            if(is_sorted(p.begin(),p.end()))
            {
                cout<<"0\n";
            }
            else{
                bool f=false;
                ll cnt=0;
                for(ll i=0;i<n;i++)
                {
                    if((p[i]-(i+1))%k!=0)
                    cnt++;
                }
                if(cnt==2)
                cout<<"1\n";
                else
                cout<<"-1\n";
                
            }


        }
    return 0;
}
