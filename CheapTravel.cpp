//https://codeforces.com/contest/466/problem/A
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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll mi = min(m*a,b);
    ll div = (n/m);
    ll rem = (n%m);
    cout<<(div*mi)+min(rem*a,b)<<'\n'; 
    return 0;
}
