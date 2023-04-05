//https://practice.geeksforgeeks.org/problems/3d49e4cce2820a813da02d1587c2dd9c542ce769/1
int checkDivisors(int n,unordered_map<int,int>& mp)//including 1 and n
    {
        for(int i=1;i<=sqrt(n);i++)
        {
            if((n%i)==0)
            {
               if(mp[i]!=0 || mp[n/i]!=0)
               return true;
            }
        }
        return false;
    }
    int countSpecialNumbers(int N, vector<int> arr) 
    {
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int cnt=0;
        mp[arr[0]]=1;
        for(int i=1;i<N;i++)
        {
            if(checkDivisors(arr[i],mp))
            {
                mp[arr[i]]++;
                arr[i]=-1;
                cnt++;
            }
            if(arr[i]!=-1)
             mp[arr[i]]++;
        }
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]!=-1)
            {
                mp[arr[i]]--;
                if(checkDivisors(arr[i],mp))
                cnt++;
            }
        }
        return cnt;
    }
