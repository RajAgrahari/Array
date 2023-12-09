class Solution {
    public String largestOddNumber(String num) 
    {
           int ans = -1;
           int n = num.length();
           for(int i=n-1;i>=0;i--)
           {
               int temp = num.charAt(i)-'0';
               if((temp%2) == 1)
               {
                   ans = i;
                   break;
               }
           }
           if(ans==-1)
           return "";
           return num.substring(0,ans+1);
    }
}
