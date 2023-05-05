//https://codeforces.com/problemset/problem/1800/D
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
        unordered_map<string,int> mp;
        int i=0,cnt=0;
        while(i<n-1)
        {
            if(i+2<n && s[i]!=s[i+2])
            cnt++;
            i++;
        }
        cout<<cnt+1<<'\n';
    }
    return 0;
}
