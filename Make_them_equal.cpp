//https://codeforces.com/problemset/problem/1594/C
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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        unordered_map<ll,ll> cnt;
        for(ll i=0;i<n;i++)
         cnt[s[i]-'a']++;
         if(cnt.size()==1)
         {
            if(s[0]==c)
            {
                cout<<"0\n";
                continue;
            }
         }
            ll idx=-1;
            for(ll i=(n/2);i<n;i++)
            {
                if(s[i]==c)
                {
                    idx=i;
                    break;
                }
            }
            if(idx!=-1)
            {
                cout<<"1\n";
                cout<<idx+1<<'\n';
            }
            else
            {
                cout<<"2\n";
                cout<<n<<' '<<n-1<<'\n';
            }
    }
    return 0;
}
