//https://www.codechef.com/problems/DISTMAT
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    if(n==2)
	    cout<<"-1"<<endl;
	    else{
	        for(int i=1;i<=n;i++)
	        {
	            if(i!=2)
	            cout<<string(i,'1')<<string(n-i,'0')<<endl;
	            else
	            cout<<"01"<<string(n-i,'0')<<endl;
	        }
	    }
	    
	}
	return 0;
}
