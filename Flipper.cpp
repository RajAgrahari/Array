//https://codeforces.com/contest/1833/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll cal(ll i,ll j)
{

}
bool cmp(vector<ll> a,vector<ll> b)
{
    ll sum1=0,sum2=0;
    for(ll i=0;i<a.size();i++)
    sum1 = sum1*10 + a[i];
    for(ll i=0;i<b.size();i++)
    sum2 = sum2*10 + b[i];
    if(sum1>sum2)
    return true;
    return false;
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
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        ll idx=n+1;
        ll mx = n;
        if(a[0]==n)
        mx = n-1;
        vector<ll> ans;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==mx)
            {
                ans.push_back(a[i]);
                idx=i;
            }
            else if(i>idx){
                ans.push_back(a[i]);
            }
        }
        if(a[0]!=mx)
        {
            if(idx!=(n-1))
            {
                ans.push_back(a[idx-1]);
                idx = idx-2;
            }
            else
            idx--;

            while(idx>=0 && a[0]<=a[idx])
            {
                ans.push_back(a[idx]);
                idx--;
            }
            for(ll i=0;i<=idx;i++)
            ans.push_back(a[i]);
        }
        else{
            ans.push_back(a[0]);
            while(idx>=1 && a[1]<=a[idx])
            {
                ans.push_back(a[idx]);
                idx--;
            }
            for(ll i=0;i<=idx;i++)
            ans.push_back(a[i]);
        }
        

        for(ll i=0;i<n;i++)
        cout<<ans[i]<<' ';
        cout<<'\n';
    }
    return 0;
}
