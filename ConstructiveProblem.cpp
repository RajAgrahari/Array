//https://codeforces.com/contest/1820/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

ll mexvalue(ll b[],ll n)
{
     ll a[n];
     for(ll i=0;i<n;i++)
     a[i]=b[i];
       sort(a,a+n);
      ll x=0;
        for(ll i=0;i<n;i++)
       {
           bool f=false;
           while(i<n && a[i]==x)
           {
              f=true;
              i++;
           }
           if(f)
           i--;
           else{
              break;
           }
           x++;
       } 
       return x;
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
       ll a[n];
       for(ll i=0;i<n;i++)
       cin>>a[i];
   
       unordered_map<ll,ll> mp;
       for(ll i=0;i<n;i++)
        mp[a[i]]++;
           ll x = mexvalue(a,n);
           if(mp[x+1]>0)
           {
               int i=0;
               while(i<n && mp[x+1]>0)
                {
                    if(a[i]==x+1)
                    {
                        while(i<n && mp[x+1]>0)
                        {  
                            if(a[i]==x+1)
                            mp[x+1]--;
                             a[i] = x;
                            i++;
                        }
                    }
                    i++;
                }
                int mx = mexvalue(a,n);
              
                if(mx == x+1)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
           }
           else{
               bool f=false;
               for(ll i=0;i<n;i++)
               {
                  if(a[i]>x || mp[a[i]]>1)
                  {
                    f=true;
                    break;
                  }
               }
               if(f)
               cout<<"YES"<<endl;
               else
               cout<<"NO"<<endl;
           }

    }
    return 0;
}
