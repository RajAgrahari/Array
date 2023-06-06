//https://codeforces.com/contest/1840/problem/C
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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll cnt = 0;
        ll ans = 0;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] <= q) {
            cnt++;
            } else {
            if(cnt>=k)
            ans += ((cnt - k + 1)*(cnt-k+2))/2;
            cnt= 0;
           }
           
        }
        if(cnt>=k)
        ans += ((cnt-k+1)*(cnt-k+2))/2;
        cout<<ans<<'\n';

    }
    return 0;
}
