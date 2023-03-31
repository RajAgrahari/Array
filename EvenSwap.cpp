//https://practice.geeksforgeeks.org/problems/even-swap/1
vector<int> lexicographicallyLargest(vector <int> &a,int n)
{
      int i=0;
      while(i<n)
      {
          int j=i;
          while(i+1<n && (a[i]+a[i+1])%2==0)
          {
              i++;
          }
          sort(a.begin()+j,a.begin()+i+1,greater<int>());
          i++;
      }
      return a;
}
