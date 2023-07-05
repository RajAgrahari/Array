//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1
int stockBuyAndSell(int n, vector<int> &price)
    {
        int sum=0;
         for(int i=0;i<n-1;i++)
         {
             if(price[i]<price[i+1])
             {
                 sum += (price[i+1]-price[i]);
             }
         }
         return sum;
    }
