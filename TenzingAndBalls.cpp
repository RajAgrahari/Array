//https://codeforces.com/contest/1842/problem/B
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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> c(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];
        for(ll i=0;i<n;i++)
        cin>>c[i];
        ll i=0,j=0,k=0,sum=0;
        while(i<n || j<n || k<n)
        {
            bool f=false;
            if(sum == x)
            {
                break;
            }
            if(i<n && (x == (x|a[i])))
            {
                f=true;
                sum |= a[i];
                i++;
            }
            if(j<n && (x == (x|b[j])))
            {
                f=true;
                sum |= b[j];
                j++;
            }
            if(k<n && (x == (x|c[k])))
            {
                f=true;
                sum |= c[k];
                k++;
            }
            if(f==false)
            break;

        }
        if(sum == x)
        cout<<"Yes\n";
        else
        cout<<"No\n";



    }
    return 0;
}
