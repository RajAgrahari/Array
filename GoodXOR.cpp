//https://www.codechef.com/problems/ASFA
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int A[n];
	    int one = 0;
	    for(int i=0;i<n;++i){
	        cin>>A[i];
	        one += A[i];
	    }
	    
	    int zero = n - one;
	    
	    if(n%2 || one == 0 )cout<<"-1\n";
	    else if(one == n && n == 2)cout<<"-1\n";
	    else if(zero == one)cout<<0<<"\n";
	    else{
	        if(zero > one){
	             
	            cout<<((zero-one)/2)<<"\n";
	        }
	        else {
	            int x = one - (n/2);
	            if((x%2)==0)
	            cout<<x/2<<endl;
	            else{
	                cout<<x/2 + 2<<endl;
	            }
	            
	        }
	    }
	}
	return 0;
}
