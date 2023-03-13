//https://practice.geeksforgeeks.org/problems/2d3fc3651507fc0c6bd1fa43861e0d1c43d4b8a1/1
long long maxPossibleValue(int N,vector<int> A, vector<int> B) 
    {
         long long ans=0;
         int mi = INT_MAX;
         for(int i=0;i<A.size();i++)
         {
             long long temp = B[i]/4;
             if(temp>0)
             {
                 temp *= 4;
                 ans += (temp*A[i]);
                 mi = min(mi,A[i]);
                 if(B[i]%4 == 0)
                 B[i]=0;
             }
             if(B[i]%4 == 1 || B[i]%4 == 0)
             B[i] = 0;
             else
             B[i] = 2;
         }
         
         int size=0,mi1=INT_MAX;
         for(int i=0;i<A.size();i++)
         {
             if(B[i]>0)
             {
                 ans += (A[i]*B[i]);
                 mi1 = min(mi1,A[i]);
                 size++;
             }
             
         }
         if(size%2 == 0)
         return ans;
         else{
            if(mi1 > mi)
            ans -= (mi*2);
            else
            ans -= (mi1*2);
         }
         return ans;
    }
