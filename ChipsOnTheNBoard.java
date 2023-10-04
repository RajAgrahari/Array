//https://codeforces.com/contest/1879/problem/B
import java.util.Scanner;
public class b155{
     public static void main(String args[])
    {
         Scanner sc = new Scanner(System.in);
         int t  = sc.nextInt();
         while(t>0)
         {
              int n = sc.nextInt();
              long[] a = new long[n];
              long[] b = new long[n];
              long min_a = Integer.MAX_VALUE;
              long min_b = Integer.MAX_VALUE;
              long sum1 = 0;
              long sum2 = 0;
              for(int i=0;i<n;i++)
              {
                  a[i] = sc.nextInt();
                  sum1 += a[i];
                  if(a[i] < min_a)
                  {
                     min_a = a[i];
                  }
              }
              for(int i=0;i<n;i++)
              {
                  b[i] = sc.nextInt();
                  sum2 += b[i];
                  if(b[i]<min_b)
                  {
                     min_b = b[i];
                  }
              }
              long num1 = ((long)min_a*(long)n)+sum2;
              long num2 = ((long)min_b*(long)n)+sum1;
              long ans;
              if(num1>num2)
              ans = num2;
              else
              ans = num1;
              System.out.println(ans);
              t--;
         }

    }
}
