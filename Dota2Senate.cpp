//https://leetcode.com/problems/dota2-senate/description/
string predictPartyVictory(string senate) 
    {
        int n = senate.size();
        string ans;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')
            cnt1++;
            else
            cnt2++;
        }
        int i=0,j=0;
        for(int k=0;k<n;k=(k+1)%n)
        {
            if(cnt2==0 || cnt1==0)
            break;
            if(senate[k]=='R')
            {
               int x = (k+1)%n;
               while(senate[x]!='D' && x!=k)
               { 
                   x = (x+1)%n; 
               }
               senate[x]='1';
               cnt2--;
            }
            else if(senate[k]=='D'){
               int x = (k+1)%n;
               while(senate[x]!='R' && x!=k)
               { 
                   x = (x+1)%n; 
               }
               senate[x]='1';
               cnt1--;
            }
           
        }
        if(cnt2==0)
        return "Radiant";
        return "Dire";
        
    }
