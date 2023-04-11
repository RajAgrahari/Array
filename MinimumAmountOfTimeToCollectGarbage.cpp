//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/
int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int n = garbage.size();
        int cost = 0;
        for(int j=0;j<3;j++)
        {
             char c;
             if(j==0)
             c = 'P';
             else if(j==1)
             c = 'G';
             else
             c = 'M';
            int i = n-1;
            while(i>=0)
            {
                bool f=false;
                for(int k=0;k<garbage[i].size();k++)
                {
                    if(garbage[i][k]==c)
                    {
                        f=true;
                        break;
                    }
                }
                if(f)
                break;
                i--;
            }
            
            while(i>=0)
            {
                int cnt=0,cost_travel=0;
                for(int k=0;k<garbage[i].size();k++)
                {
                    if(garbage[i][k]==c)
                    cnt++;
                }
                if(i>0)
                cost_travel = travel[i-1];
                cost += (cnt + cost_travel);
                i--;
            }
        }
        return cost;
    }
