// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp[n];
        int profit=0;
        maxp[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
           maxp[i]=max(maxp[i+1],prices[i]); 
        }
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]>=maxp[i+1])
                continue;
            else
                profit=max(profit,maxp[i+1]-prices[i]);
        }
        return profit;
    }
// alternate solution
int maxProfit(int prices[]) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }