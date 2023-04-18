//https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
vector<int> minOperations(string boxes) 
    {
        int n = boxes.size();
        vector<int> ans(n,0);
        vector<int> left(n,0);
        vector<int> right(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            left[i] = cnt;
            else
            left[i] = left[i-1]+cnt;
            if(boxes[i]=='1')
            cnt++;
        }
        cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            right[i] = cnt;
            else
            right[i] = right[i+1]+cnt;
            if(boxes[i]=='1')
            cnt++;
        }
        for(int i=0;i<n;i++)
        {
            ans[i] = left[i]+right[i];
        }
        return ans;
    }
