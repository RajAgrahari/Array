//https://codeforces.com/contest/1736/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       if(n==1)
       cout<<"YES"<<endl;
       else{
          vector<ll> b(n+1);
          b[0] = a[0];
          for(int i=1;i<n;i++)
          {
             b[i] = (a[i-1]*a[i])/(__gcd(a[i-1],a[i]));
          }
          b[n] = a[n-1];
          bool f=false;
          for(int i=0;i<n-1;i++)
          {
              if(__gcd(b[i],b[i+1])!=a[i])
              {
                  f=true;
                  break;
              }
          }
          if(f)
          cout<<"NO"<<endl;
          else
          cout<<"YES"<<endl;
       } 
    }
    return 0;
}
