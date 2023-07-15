//https://codeforces.com/contest/1846/problem/E1
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
       bool f=false;
       for(ll k=2;k<=sqrt(n);k++)
       {
           ll n1 = n;
           ll cnt=0;
           while((n1%k)==1 && (n1!=1))
           {
               cnt++;
               n1 = n1/k;
           }
           if(n1==1 && cnt>=2)
           {
            cout<<"YES\n";
            f=true;
            break;
           }

       } 
       if(!f)
       cout<<"NO\n";
    }
    return 0;
}
