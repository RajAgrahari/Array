//https://leetcode.com/problems/can-place-flowers/
bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int i=0,num=flowerbed.size(),ans=0;
        while(i<num && flowerbed[i]!=1)
        i++;
        if(i==num)
        ans += (i+1)/2;
        else
        ans += (i/2);
        while(i<num)
        {
            int j=i;
            while(i<num && flowerbed[i]!=1)
            i++;
            if(i==num)
            {
                ans += (i-j)/2;
            }
            else if(i-j>0)
            ans += (i-j-1)/2;
            i++;
        }
        if(ans >= n)
        return true;
        return false;
    }
