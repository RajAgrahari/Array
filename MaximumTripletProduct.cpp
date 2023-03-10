//https://practice.geeksforgeeks.org/problems/d54c71dc974b7db3a200eb63f34e3d1cba955d86/1
long long maxTripletProduct(long long arr[], int n)
    {
    	sort(arr,arr+n);
    	bool f=true;
    	int neg=0,z=0;
    	for(int i=0;i<2;i++)
    	{
    	    if(arr[i]<0)
    	    neg++;
    	    else if(arr[i]==0)
    	    z++;
    	}
    	long long m = arr[n-1]*arr[n-2]*arr[n-3];
    	if(neg==2)
    	m = max(m,arr[0]*arr[1]*arr[n-1]);
    	if(z>0)
    	m = max(m,(1LL)*0);
    	return m;
    }
