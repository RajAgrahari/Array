//https://leetcode.com/problems/add-digits/description/
int addDigits(int num) 
    {
        int cnt=3,sum=0;
        while(cnt>0)
        {
            sum=0;
            while(num>0)
            {
              sum += num%10;
              num = num/10;
            }
            num = sum;
            cnt--;
        }
        return sum;
    }
