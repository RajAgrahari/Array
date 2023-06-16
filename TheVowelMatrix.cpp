//https://www.codechef.com/problems/VOWMTRX
#include <iostream>
#define ll long long
#define mod 1000000007
using namespace std;
ll power(ll n,ll r)
{
    if(r==0)
    return 1;
    ll ans = power(n,r/2);
    ans = (ans*ans)%mod;
    if(r&1)
    return (ans*n)%mod;
    return ans;
}
bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    return false;
}
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        ll cnt=0,v=0,ans=1;
        if(k!=1)
        {
            for(ll i=0;i<n;i++)
            {
                if(isvowel(s[i]))
                v++;
                if(v>0 && (v%k)==0)
                cnt++;
                else if(cnt>0)
                {
                    ans = (ans*cnt)%mod;
                    cnt=0;
                }
            }
        }
        else{
            v = -1;
            for(ll i=0;i<n;i++)
            {
                if(isvowel(s[i]))
                {
                    if(v!=-1)
                    ans = (ans*(i-v))%mod;
                    v=i;
                }
            }
        }
        
        
        cout<<ans<<'\n';
    }
	return 0;
}
