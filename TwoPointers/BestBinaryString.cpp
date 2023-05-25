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
        string s;
        cin>>s;
        ll n = s.size();
        ll j=n-1;
        ll i=0;
        char c = '0';
        while(i<n)
        {
            if(s[i]=='?')
            s[i] = c;
            while(i<n && s[i]!='?')
            {
                c = s[i];
                i++;
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}
