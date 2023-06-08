//https://codeforces.com/problemset/problem/517/B
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
    string a,b;
    cin>>a>>b;
    ll a1[26]={0},a2[26]={0},b1[26]={0},b2[26]={0};
    for(int i=0;i<26;i++)
    {
        a1[i]=b1[i]=a2[i]=b2[i]=0;
    }
    for(int i=0;i<a.size();i++)
    {
        if('a'<=a[i] && 'z'>=a[i])
        a1[a[i]-'a']++;
        else
        a2[a[i]-'A']++;
    }   
    for(int i=0;i<b.size();i++)
    {
        if('a'<=b[i] && 'z'>=b[i])
        b1[b[i]-'a']++;
        else
        b2[b[i]-'A']++;
    }
    
    ll c1=0,c2=0;
    for(int i=0;i<26;i++)
    {
        if(a1[i]>=b1[i])
        {
            c1 += b1[i];
            a1[i] -= b1[i];
            b1[i]=0;
        }
        else{
             c1 += a1[i];
            b1[i] -= a1[i];
            a1[i]=0;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a2[i]>=b2[i])
        {
            c1 += b2[i];
            a2[i] -= b2[i];
            b2[i]=0;
        }
        else{
            c1 += a2[i];
            b2[i] -= a2[i];
            a2[i]=0;
    }
    }
    for(int i=0;i<26;i++)
    {
        if(a1[i]>=b2[i])
        {
            c2 += b2[i];
            a1[i] -= b2[i];
            b2[i]=0;
        }
        else{
            c2 += a1[i];
            b2[i] -= a1[i];
            a1[i]=0;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a2[i]>=b1[i])
        {
            c2 += b1[i];
            a2[i] -= b1[i];
            b1[i]=0;
        }
        else{
            c2 += a2[i];
            b1[i] -= a2[i];
            a2[i]=0;
    }
    }
    cout<<c1<<' '<<c2<<'\n';
    
    return 0;
}
