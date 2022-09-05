// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
// solution: https://youtu.be/U0utLw_vWGM
  int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int windowSum=0,minWindow=INT_MAX,Sum=0;
        for(int i=0;i<n;i++)
        Sum+=a[i];
        if(n==k)
        return Sum;
        for(int i=0;i<n-k-1;i++)
        windowSum += a[i];
        for(int i=n-k-1;i<n;i++)
        {
            windowSum += a[i];
            minWindow = min(minWindow,windowSum);
            windowSum-=a[i-(n-k-1)];
           
        }
        return Sum-minWindow;
    }