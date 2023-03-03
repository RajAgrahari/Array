// https://leetcode.com/problems/shortest-palindrome/
string shortestPalindrome(string s) 
    {
        string temp = s;
        int n = s.size();
        reverse(s.begin(),s.end());
        string snew = temp + '#' + s;
        vector<int> pi(snew.size(),0);
        int j=0;
        for(int i=1;i<snew.size();i++)
        {
            j = pi[i-1];
            while(j>0 && snew[i]!=snew[j])
            {
                j = pi[j-1];
            }
            if(snew[i]==snew[j])
            j++;
            pi[i]=j;
        }
        return s.substr(0,n-pi[snew.size()-1])+temp;
    }
