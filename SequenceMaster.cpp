//https://codeforces.com/contest/1806/problem/C
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[2*n];
        ll sum=0;
        ll sum1=0;
        for(ll i=0;i<2*n;i++)
        {
            cin>>a[i];
            sum += abs(a[i]);
        }
        if(n==1)
        {
            cout<<abs(a[0]-a[1])<<endl;
            continue;
        }
        if(n==2)
        {
            for(ll i=0;i<2*n;i++)
            sum1 += abs(2-a[i]);
            sum = min(sum,sum1);
        }
        if(n%2 == 0)
        {
             ll mi=INT_MAX;
            ll idx=-1;
            ll sum2=0;
                sort(a,a+2*n);
                for(ll i=0;i<2*n-1;i++)
                {
                    sum2 += abs(a[i]+1);
                }
                sum2 += abs(a[2*n-1]-n);
                
                sum = min(sum,sum2);  
        }  
        cout<<sum<<endl;
    }
    return 0;
}
