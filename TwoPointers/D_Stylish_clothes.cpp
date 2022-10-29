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
ll give(ll p, ll q,ll r, ll s)
{
    ll v[] = {p, q, r, s};
    ll diff = LLONG_MIN;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i!=j) diff = max(diff,v[i]-v[j]);
        }
    }
    return diff;
}
int main()
{
    ll c,p,s,b;

    cin>>c;
    ll caps[c];
    for(ll i=0;i<c;i++)
    cin>>caps[i];
    sort(caps,caps+c);

    cin>>s;
    ll shirts[s];
    for(ll i=0;i<s;i++)
    cin>>shirts[i];
    sort(shirts,shirts+s);

    cin>>p;
    ll pants[p];
    for(ll i=0;i<p;i++)
    cin>>pants[i];
    sort(pants,pants+p);

    cin>>b;
    ll shoes[b];
    for(ll i=0;i<b;i++)
    cin>>shoes[i];
    sort(shoes,shoes+b);
    
    ll i1 = 0, i2 = 0, i3 = 0, i4 = 0, mn = LLONG_MAX, a1 = -1, b1 = -1, c1 = -1, d1 = -1;
        while(i1<c && i2<s && i3<p && i4<b)
        {
            
            ll diff = give(caps[i1],shirts[i2],pants[i3],shoes[i4]);
            if(diff < mn)
            {
                mn = diff;
                a1 = i1; b1 = i2; c1 = i3; d1 = i4;
            }

            if(caps[i1]<=shirts[i2] && caps[i1]<=pants[i3] && caps[i1]<=shoes[i4])
            {
                i1++;
            }

            else if(shirts[i2]<=caps[i1] && shirts[i2]<=pants[i3] && shirts[i2]<=shoes[i4])
            {
                i2++;
            }

            else if(pants[i3]<=shirts[i2] && pants[i3]<=caps[i1] && pants[i3]<=shoes[i4])
            {
                i3++;
            }

            else if(shoes[i4]<=caps[i1] && shoes[i4]<=shirts[i2] && shoes[i4]<=pants[i3])
            {
                i4++;
            }
        }
        cout<<caps[a1]<<" "<<shirts[b1]<<" "<<pants[c1]<<" "<<shoes[d1]<<"\n";
    
    return 0;
}