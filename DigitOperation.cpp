//https://www.codechef.com/problems/DIGITOP
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
        ll n,k;
        cin>>n>>k;
        string a[n],b[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];

       
        ll mp1[10];
        
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<a[i].size();j++)
            {
                mp1[a[i][j]-'0']++;
               
            }
        }
        
        bool f=false;
        ll cost = 0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<a[i].size();j++)
            {
                if(a[i].size()!=b[i].size())
                {
                    f=true;
                    break;
                }
                if(a[i][j]==b[i][j])
                {
                    mp1[a[i][j]-'0']--;
                }
                else{
                    if(mp1[b[i][j]-'0']>0)
                    {
                        mp1[b[i][j]-'0']--;
                    }
                    else{
                        cost += 1;
                    }
                }
            }
            if(f)
            break;
        }
        if(f)
        cout<<"NO"<<endl;
        else
        {
            if(cost<=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

        

    }
    return 0;
}
