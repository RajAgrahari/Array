//https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-104/problems/#
int distinctElements(int N, int K, vector<int> A)
    {
        unordered_map<int,int> mp;
        sort(A.begin(),A.end());
        for(int i=0;i<N;i++)
        {
            if(mp.count(A[i]-K)==0)
            {
                mp[A[i]-K]++;
            }
            else if(mp.count(A[i])==0)
            {
                mp[A[i]]++;
            }
            else if(mp.count(A[i]+K)==0)
            {
                mp[A[i]+K]++;
            }
        }
       
        return mp.size();
    }
