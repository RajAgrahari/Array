//https://leetcode.com/problems/buddy-strings/description/
bool buddyStrings(string s, string goal) 
    {
        if(s.size()!=goal.size())
        return false;
        int first = -1,second = -1;
        vector<int> freq(26, 0);
        bool hasDuplicates=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                if(first==-1)
                first = i;
                else if(second==-1)
                second = i;
                else
                return false;
            }
            freq[s[i]-'a']++;
            if (!hasDuplicates && freq[s[i]-'a']>=2) 
            hasDuplicates=1;
        }
        if (s==goal && hasDuplicates) 
        return true;
        if(first==-1 || second==-1)
        return false;
        swap(s[first],s[second]);
        if(s==goal)
        return true;
        return false;
    }
