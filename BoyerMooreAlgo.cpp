//for finding element whose frequency is more than [n/2]
// https://leetcode.com/problems/majority-element/
int freqElement(vector<int> a)
{
    int ansIndex = 0;
    int count = 1;
    for(int i=1;i<a.size();i++)
    {
       if(a[i]==a[ansIndex])
       count++;
       else
       count--;
       if(count==0)
       {
           ansIndex=i;
           count=1;
       }
    }
    int num = a[ansIndex];
    count=0;
    for(int i=0;i<a.size();i++)
    {
      if(a[i]==num)
      count++;
    }
    if(count>(a.size()/2))
    return num;
    return -1;
}
//for finding elements whose frequency is more than [n/3]
// https://leetcode.com/problems/majority-element-ii/
vector<int> majorityElement(vector<int>& nums) {
        int idx1=0;
        int idx2=0;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[idx1])
            count1++;
            else if(nums[i]==nums[idx2])
            count2++;
            else if(count1==0)
            {
                idx1=i;
                count1=1;
            }
            else if(count2==0)
            {
                idx2=i;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[idx1])
            c1++;
            else if(nums[i]==nums[idx2])
            c2++;
        }
        int n = nums.size();
        if(c1>(n/3))
        ans.push_back(nums[idx1]);
        if(c2>(n/3))
        ans.push_back(nums[idx2]);
        return ans;
        
    }