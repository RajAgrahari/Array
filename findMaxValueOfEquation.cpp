// https://leetcode.com/problems/max-value-of-equation/
int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int n = points.size();
       priority_queue<pair<int,int>> pq;
        pq.push({points[0][1]-points[0][0],points[0][0]});
        int ans= INT_MIN;
        for(int i=1;i<n;i++)
        {
            vector<int> x = points[i];
            while(!pq.empty() && (x[0]-pq.top().second)>k)
                pq.pop();
            if(!pq.empty())
                ans = max(ans,x[0]+x[1]+pq.top().first);
            pq.push({x[1]-x[0],x[0]});

        }
        return ans;
    }