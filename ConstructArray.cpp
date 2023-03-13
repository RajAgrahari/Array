// https://www.codechef.com/problems/CONSTRRAY
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    int f=1;
	    if(n%2 == 1)
	    {
	        cout<<-1<<endl;
	    }
	    else{
	        vector<int> v;
	        for(int i=1;i<=(n/2);i++)
    	    {
    	        if(f==1)
                {
                    v.push_back(i);
                }
                else{
                    v.push_back(i*(-1));
                }
                f = 1-f;
    	    }
    	    for(int i=v.size()-1;i>=0;i--)
    	    {
    	        v.push_back(v[i]*(-1));
    	    }
    	    for(int i=0;i<v.size();i++)
    	    cout<<v[i]<<" ";
    	    cout<<endl;
    	    
	    }
	}
	return 0;
}
