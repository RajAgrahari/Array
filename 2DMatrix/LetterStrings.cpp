//https://codeforces.com/problemset/problem/1669/E
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
        vector<vector<ll>> v(11,vector<ll>(11,0));
          vector<string> st;
        for(ll i=0;i<n;i++)
        {
            string s;
            cin>>s;
            st.push_back(s);
            v[s[0]-'a'][s[1]-'a']++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<11;j++)
            {
                if((st[i][1]-'a')!=j)
                ans += v[st[i][0]-'a'][j];
            }
            for(ll j=0;j<11;j++)
            {
                if((st[i][0]-'a')!=j)
                ans += v[j][st[i][1]-'a'];
            }
            v[st[i][0]-'a'][st[i][1]-'a']--;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
