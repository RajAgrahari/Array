//https://practice.geeksforgeeks.org/problems/8d0e8785cef59cf4903b926ceb7100bcd16a9835/1
bool makePalindrome(int n,vector<string> &arr)
    {
        unordered_map<string,int> mp;

        for(int i=0;i<n;i++)
        {
            string temp = arr[i];
            reverse(arr[i].begin(),arr[i].end());
            if(mp[arr[i]]>0)
            {
                mp[arr[i]]--;
            }
            else
            mp[temp]++;
            
        }
        int cnt=0;
        string s;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                s = it.first;
               cnt++;
            }
        }
        if(cnt==0)
        return true;
        if(cnt==1)
        {
            int i=0, j=s.length()-1;
            while(i<=j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
        return false;
       
    }
