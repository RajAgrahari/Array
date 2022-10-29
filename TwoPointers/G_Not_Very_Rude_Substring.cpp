#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll countSetBits(ll n)
{
    ll count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
ll power(ll N,ll R)
    {
       ll m = 1000000007;
       if(R==0) 
       return 1;
        ll ans=power(N,R/2);
        ans=(ans*ans)%m;
        if(R%2==0) 
        return ans;
        return ans*N%m; 
       
    }
// Sieve of Eratosthenes
vector<bool> IsPrime(ll n)
{
    vector<bool> prime(n,true);
    prime[0]=false;
    prime[1]=false;
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i])
        for(ll j=i*i;j<=n;j+=i)
        {
            prime[j]=false;
        }
    }
    return prime;
}
//Euclid's gcd
ll gcd(ll a,ll b)
{
    if(b == 0)
    return a;
    else
    return gcd(b, a%b);
}
int countTotalFactors(int n)//including 1 and n
{
    int count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if((n%i)==0)
        {
            if((n/i)==i)
            count++;
            else
            count+=2;
        }
    }
    return count;
}
void countTotalPrimeFactors(int n)
{
    //if number is even then extract all 2 from it.
     while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}
int main()
{
        ll n,c;
        cin>>n>>c;
        string s;
        cin>>s;
        ll ans=0;
        ll l=0,cnt=0;
        deque<ll> adj[30];
        for(ll r=0;r<n;r++)
        {
            if(s[r]=='a')
            {
                adj[0].push_back(r);
            }
            else if(s[r]=='b')
            {
                adj[1].push_back(r);
                ll idx = lower_bound(adj[0].begin(),adj[0].end(),r)-adj[0].begin();
                --idx;
                if(idx >=0 && idx < adj[0].size())
                {
                    cnt += 1+idx;
                }
            }
            while(l<n && cnt>c)
            {
                    if(s[l] == 'a')
                    {
                        adj[0].pop_front();
                        ll indx = upper_bound(adj[1].begin(),adj[1].end(),l)-adj[1].begin();
                        if(indx>=0 && indx<adj[1].size()) 
                        cnt -= (adj[1].size() - indx);
                    }
                    else if(s[l] == 'b')
                    {
                        adj[1].pop_front();
                        ll indx = lower_bound(adj[0].begin(),adj[0].end(),l)-adj[0].begin();
                        --indx;
                        if(indx>=0 && indx<adj[1].size()) 
                        cnt -= (indx+1);
                    }
                l++;
            }
            if(cnt<=c)
            ans = max(ans,r-l+1);
        }
        cout<<ans<<endl;
    return 0;
}