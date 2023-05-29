//https://practice.geeksforgeeks.org/problems/camelcase-pattern-matching2259/1
vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) 
    {
        
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<N;i++)
        {
            string temp;
            for(int j=0;j<Dictionary[i].size();j++)
            {
                if(Dictionary[i][j]>='A' && Dictionary[i][j]<='Z')
                temp += Dictionary[i][j];
            }
            int j=0;
            for(j=0;j<Pattern.size() && j<temp.size();j++)
            {
                if(Pattern[j]!=temp[j])
                {
                    break;
                }
            }
            if(j==Pattern.size())
            mp[Pattern].push_back(Dictionary[i]);
        }
        vector<string> ans;
        for(auto it:mp[Pattern])
        ans.push_back(it);
        sort(ans.begin(),ans.end());
        if(ans.empty())
        ans.push_back("-1");
        return ans;
    }
