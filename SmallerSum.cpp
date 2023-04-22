//https://practice.geeksforgeeks.org/problems/5877fde1c8e1029658845cd4bc94066ac1d4b09b/1
 vector<long long> smallerSum(int n,vector<int> &arr)
    {
        vector<int> dummy;
        unordered_map<int,long long> mp;
        vector<long long> ans;
        
        dummy = arr;
        sort(dummy.begin(),dummy.end());
        
         long long pre=0;
        mp[dummy[0]] = pre;
        for(int i=1;i<n;i++)
        {
            pre += dummy[i-1];
            if(!mp.count(dummy[i]))
            mp[dummy[i]] = pre;
        }
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
