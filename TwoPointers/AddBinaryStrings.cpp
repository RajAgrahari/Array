//
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
    int i=n-1,j=m-1;
    int c = 0;
    string ans;
    while(i>=0 && j>=0)
    {
       int sum = (a[i]-'0')+(b[j]-'0')+c;
       if(sum==3)
       {
           ans = '1'+ans;
           c = 1;
       }
       else if(sum==2)
       {
           ans = '0'+ans;
           c = 1;
       }
       else if(sum==1)
       {
           ans = '1'+ans;
           c = 0;
       }
       else{
           ans = '0'+ans;
           c = 0;
       }
       i--;
       j--;
    }

    while(i>=0)
    {
        int sum = (a[i]-'0')+c;
        if(sum==2)
       {
           ans = '0'+ans;
           c = 1;
       }
       else if(sum==1)
       {
           ans = '1'+ans;
           c = 0;
       }
       else{
           ans = '0'+ans;
           c = 0;
       }
       i--;
    }
    while(j>=0)
    {
        int sum = (b[j]-'0')+c;
        if(sum==2)
       {
           ans = '0'+ans;
           c = 1;
       }
       else if(sum==1)
       {
           ans = '1'+ans;
           c = 0;
       }
       else{
           ans = '0'+ans;
           c = 0;
       }
       j--;
    }
    if(c>0)
    ans = '1'+ans;
    // reverse(ans.begin(),ans.end());
    return ans;
}
