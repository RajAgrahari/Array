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
   
       ll n,s;
       cin>>n>>s;
       ll a[n];
       for(ll i=0;i<n;i++)
       cin>>a[i];
       ll l=0,sum=0,temp_ans1=INT_MAX;
       for(ll r=0;r<n;r++)
       {
          sum += a[r];
          while(sum-a[l]>=s)
          {
             sum-=a[l];
             l++;
          }
          if(sum>=s)
          temp_ans1 = min(temp_ans1,r-l+1);
       } 
       
       cout<<temp_ans1<<endl;
    return 0;
}