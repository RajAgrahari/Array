//https://www.codechef.com/problems/ANTIPALINDR
#include <bits/stdc++.h>
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
	    string s;
	    cin>>s;
	    
	    unordered_map<int,int> mp;
	    for(char c:s)
	    mp[c-'a']++;
	    
	    int k=0;
	    if(n&1)
	    {
	        for(auto i:mp)
    	    {
    	        if((i.second)%2 == 1)
    	        k++;
    	    }
    	    if(k==1)
    	    {
    	        if(mp.size()==1)
    	        cout<<"2\n";
    	        else
    	        cout<<"1\n";
    	    }
    	    else
    	    cout<<"0\n";
	    }
	    else{
	        for(auto i:mp)
    	    {
    	        if((i.second)%2 == 1)
    	        {
    	            k++;
    	            break;
    	        }
    	    }
    	    if(k==0)
    	    cout<<"1\n";
    	    else
    	    cout<<"0\n";
	    }
	    
	}
	return 0;
}
