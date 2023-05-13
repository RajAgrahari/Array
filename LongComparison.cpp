//https://codeforces.com/contest/1613/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
void solve(ll a,ll b,ll temp1,ll temp2)
{
            if(a<b)
            cout<<"<\n";
            else if(a>b)
            cout<<">\n";
            else{
                if(temp1<temp2)
                cout<<"<\n";
                else if(temp1>temp2)
                cout<<">\n";
                else
                cout<<"=\n";
            }
}
int main()
{
    NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,a;
        ll y,b;
        cin>>x>>a;
        cin>>y>>b;
        ll cnt1 = 0,temp1 = x;
        while(x>0)
        {
            cnt1++;
            x = x/10;
        }

        ll cnt2 = 0,temp2 = y;
        while(y>0)
        {
            cnt2++;
            y = y/10;
        }

        if(cnt1<cnt2)
        {
            if(a>=(cnt2-cnt1))
            {
                while(cnt2!=cnt1)
                {
                    temp1 *= 10;
                    cnt1++;
                    a--;
                }
                solve(a,b,temp1,temp2);
            }
            else
            cout<<"<\n";
        }
        else if(cnt1>cnt2)
        {
            if(b>=(cnt1-cnt2))
            {
                while(cnt2!=cnt1)
                {
                    temp2 *= 10;
                    cnt2++;
                    b--;
                }
                solve(a,b,temp1,temp2);
            }
            else
            cout<<">\n";
        }
        else{
            solve(a,b,temp1,temp2);

        }
            
        
    }
    return 0;
}
