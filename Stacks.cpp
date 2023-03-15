//https://www.codechef.com/problems/STACKS
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    multiset<int> ms;
	    ms.insert(a[0]);
	    for(int i=1;i<n;i++)
	    {
	        auto it  = ms.upper_bound(a[i]);
	        if(it==ms.end())
	        {
	            ms.insert(a[i]);
	        }
	        else{
	            ms.erase(it);
	            ms.insert(a[i]);
	        }
	    }
	    cout<<ms.size()<<" ";
	    for(auto it=ms.begin();it!=ms.end();it++)
	    {
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
