//https://practice.geeksforgeeks.org/problems/search-pattern0205/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=Search+Pattern+(KMP-Algorithm)
 vector<int> search(string pat, string txt)
        {
            int n = txt.size();
            int m = pat.size();
            vector<int> res;
            string temp = pat+'#'+txt;
           vector<int> lps(temp.size(),0);
           for(int i=1;i<temp.size();i++)
           {
               int j = lps[i-1];
               while(j>0 && temp[i]!=temp[j])
               {
                   j = lps[j-1];
               }
               if(temp[i]==temp[j])
               j++;
               if(j==m)
               {
                   res.push_back((i-j+1)-m);
               }
               lps[i] = j;
           }
           return res;
        }
