//https://leetcode.com/problems/gas-station/
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,cnt=0,check=0,idx=0,n=gas.size();
        for(int i=0;cnt!=n && check<=2*n;i=(i+1)%n)
        {
            sum += (gas[i]-cost[i]); 
            if(sum<0)
            {
                sum=0;
                cnt=0;
                idx=i+1;
            } 
            else
            cnt++;  
            check++;  
        }
        if(check==2*n && cnt!=n)
        return -1;
        if(cnt==n)
        return idx;
        return -1;
    }
