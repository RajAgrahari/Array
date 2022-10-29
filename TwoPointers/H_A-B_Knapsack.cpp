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
       ll n,m,s,a,b;
       cin>>n>>m>>s>>a>>b;
       ll costs_a[n];
       ll costs_b[m];
       for(ll i=0;i<n;i++)
       cin>>costs_a[i]; 
       for(ll i=0;i<m;i++)
       cin>>costs_b[i]; 

       sort(costs_a,costs_a+n);
       reverse(costs_a,costs_a+n);
       sort(costs_b,costs_b+m);
       reverse(costs_b,costs_b+m);

       ll i=0,j=0,wsum = 0, ans = 0, mx = 0;
       while(i<n)
        {
            wsum += a;
            ans += costs_a[i];
            if(wsum <= s)
            mx = max(mx, ans);
            else
            break;
            
            i++;
        }
        if(i >= n) 
        i = n-1;
        while(j<m)
        {
        
            wsum += b;
            ans += costs_b[j];
            
                ll k = i;
                while(k>=0 && wsum > s)
                {
                    ans -= costs_a[k];
                    wsum -= a;
                    k--;
                }
                i = k;
            
             if(wsum <= s)
             {
                mx = max(mx, ans);
             }
            j++;
        }
        cout<<mx<<endl;
 
    return 0;
}