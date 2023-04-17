//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int mx=0;
        for(int x:candies)
        mx = max(mx,x);
        int n = candies.size();
        vector<bool> result;
        for(int i=0;i<n;i++)
        {
            if(extraCandies+candies[i]>=mx)
            result.push_back(true);
            else
            result.push_back(false);
        }
        return result;
    }
