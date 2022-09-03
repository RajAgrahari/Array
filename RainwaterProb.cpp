#include<bits/stdc++.h>
using namespace std;
int rainwaterCollection(vector<int> v)
{
    int n = v.size();
    int left[n];
    int  right[n];
    left[0]=v[0];
    for(int i=1;i<n;i++)
    left[i]=max(left[i-1],v[i]);
    right[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    right[i]=max(right[i+1],v[i]);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(min(left[i],right[i])-v[i]);
    }
    return ans;
}
int main()
{
    vector<int> a={3,1,2,4,0,1,3,2}; 
    cout<<rainwaterCollection(a);
    return 0;
}