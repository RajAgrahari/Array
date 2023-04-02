//https://codeforces.com/contest/1805/problem/B
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
       string s;
       cin>>s;
       char mi='z';
       int idx=0;
       for(int i=0;i<n;i++) 
       {
          if(mi>=s[i])
          {
             mi = s[i];
             idx=i;
          }
       }
       if(idx==0)
       cout<<s<<endl;
       else{
          cout<<s[idx]+s.substr(0,idx)+s.substr(idx+1,n)<<endl;
       }
    }
    return 0;
}
