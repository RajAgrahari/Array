//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/
double average(vector<int>& salary) 
    {
        double avg = 0;
        int n = salary.size();
        int mx=INT_MIN,mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            avg += salary[i];
            mx = max(mx,salary[i]);
            mi = min(mi,salary[i]);
        }
        avg -= mx;
        avg -= mi;
        return (avg/(n-2));
    }
