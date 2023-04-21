//https://practice.geeksforgeeks.org/problems/5be83263c7f2cb866c60b23b73bb38f88de2461c/1
int prefixSuffixString(vector<string> &s1,vector<string> s2)
    {
         int count =0;
        int l2 = s2.size();
        unordered_map<string,bool>mp;

        for(auto x : s1)
        {
            string temp ="";
            for(int i =0 ; i<x.length() ; i++)
            {
                temp+= x[i];
                mp[temp]=true;
            }
        
            string temp1 ="";
            for(int i =x.length()-1 ; i>=0 ; i--)
            {
                temp1= x[i]+temp1;
                mp[temp1]=true;
            }
        }
        
        for(int i =0 ; i< l2 ; i++)
        {
            string ans = s2[i];
            if(mp.find(ans)!=mp.end())
            {
                count++;
            }
        }
        return count;
    }
