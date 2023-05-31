//https://practice.geeksforgeeks.org/problems/frequency-game/1
int LargButMinFreq(int arr[], int n) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int mi = INT_MAX;
        for(auto it:mp)
        mi = min(mi,it.second);
        
        int mx = INT_MIN;
        for(auto it:mp)
        {
            if(mi==it.second)
            mx = max(mx,it.first);
        }
        
        return mx;
    }
