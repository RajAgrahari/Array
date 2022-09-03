// https://leetcode.com/problems/3sum/
vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> v;
        set<vector<int>> s;
         int n=nums.size();
         sort(nums.begin(),nums.end());
          int sum=0;
             for(int k=0;k<n;k++)
             {
                 if(k>0 && nums[k-1]==nums[k])
                 continue;
                 int i=k+1,j=n-1;
                 while(i<j)
                 {
                     sum=nums[i]+nums[j]+nums[k];
                    if(i!=k && j!=k && (sum)==0)
                    {
                        s.insert({nums[i],nums[j],nums[k]});   
                        i++;
                        j--;
                    } 
                    else if(sum>0){
                        j--;
                    }
                     else{
                         i++;
                     }
                 }
             }
             
        for(auto it:s)
            v.push_back(it);
        return v;     
    }