//https://practice.geeksforgeeks.org/problems/d7cd0429f9cf85f421831c4f6d50fad99566c1f9/1
int specialPalindrome(string s1, string s2)
    {
          if(s1.size() < s2.size())
          return -1;
          int ans = INT_MAX;
          for(int i=0;i<=s1.size()-s2.size();i++)
          {
              string temp = s1;
              int cnt=0;
              for(int j=0;j<s2.size();j++)
              {
                  if(temp[i+j]!=s2[j])
                  cnt++;
                  temp[i+j] = s2[j];
              }
               int l=0,r=temp.size()-1;
               bool f=true;
                while(l<r)
                {
                    if(l<i || r>(i+s2.size()-1))
                    {
                        if(temp[l]!=temp[r])
                        cnt++;
                    }
                    else{
                        if(temp[l]!=temp[r])
                        {
                            f=false;
                            break;
                        }
                    }
                    l++;
                    r--; 
                    
                }
                if(f)
                ans = min(ans,cnt);
          }
          return (ans==INT_MAX)?-1:ans;
    }
