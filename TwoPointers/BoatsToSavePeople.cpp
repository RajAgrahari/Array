//https://leetcode.com/problems/boats-to-save-people/
int numRescueBoats(vector<int>& people, int limit) 
    {
         int n = people.size(),cnt=0;
         int i=0,j=n-1;
         sort(people.begin(),people.end());
         while(i<=j)
         {
             if(i!=j && (people[i]+people[j])<=limit)
             {
                 i++;
                 j--;
             }
             else{
                 j--;
             }
             cnt++;
         }
         return cnt;
    }
