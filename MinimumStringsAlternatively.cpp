//https://leetcode.com/problems/merge-strings-alternately/description/
string mergeAlternately(string word1, string word2) 
    {
         int i=0,j=0,n=word1.size(),m=word2.size();
         bool f=true;
         string ans="";
         while(i<n && j<m)
         {
             if(f)
             {
                 ans += word1[i++];
             }
             else{
                 ans += word2[j++];
             }
             f = (!f);
         }
         while(i<n)
         ans += word1[i++];
         while(j<m)
         ans += word2[j++];
         return ans;
    }
