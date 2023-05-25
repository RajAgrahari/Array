//
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
        ll ans=0;
        ll i=0;
        while(i<n)
        {
            int j = i;
            while(i+1<n && s[i]==s[i+1])
            {
                i++;
            }
            ans = max(ans,i-j+1);
            i++;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
