//https://codeforces.com/contest/1828/problem/C
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
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];

        sort(b,b+n);
        sort(a,a+n);
        int j=n-1;
        ll ans=1,x=0;
        for(int i=n-1;i>=0;i--)
        {
            while(j>=0 && b[i]<a[j])
            j--;
            
            ans = (ans*(n-j-x-1))%mod;
            x++;
        }
        
            cout<<ans<<endl;
    }
    return 0;
}
