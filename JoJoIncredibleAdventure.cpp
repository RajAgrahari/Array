//https://codeforces.com/contest/1820/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string temp;
        int n = s.size();
        for(int i=0;i<n && s[i]!='0';i++)
        temp += s[i];
        if(temp.size()==n)
        {
            cout<<(ll)n*n<<endl;
            continue;
        }
        if(s[0]=='1' && s[s.size()-1]=='1')
        s += s;
        
        n = s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j = i;
            while(i<n && s[i]=='1')
            i++;
            ans = max(ans,i-j);
        }
        int res = (ans+1)/2;
        cout<<(ll)(res)*(ans-res+1)<<endl;
        
    }
    return 0;
}
