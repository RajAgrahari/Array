//https://leetcode.com/problems/find-the-highest-altitude/description/
int largestAltitude(vector<int>& gain) {
        int al = 0,ans = 0,n = gain.size();
        for(int i=0;i<n;i++)
        {
            al += gain[i];
            ans = max(ans,al);
        }
        return ans;
    }
