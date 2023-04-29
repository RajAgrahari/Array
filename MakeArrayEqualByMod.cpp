//https://codeforces.com/problemset/problem/1656/C
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
        ll o=0,z=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            z++;
            if(a[i]==1)
            o++;
        }
        if(o>0 && z>0)
        {
            cout<<"NO\n";
        }
        else if(o>0)
        {
            sort(a,a+n);
            bool f=false;
            for(ll i=0;i<n-1;i++)
            {
                if(a[i]+1==a[i+1])
                {
                    f=true;
                    break;
                }
            }
            if(f)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else
        cout<<"YES\n";
        

        
    }
    return 0;
}
