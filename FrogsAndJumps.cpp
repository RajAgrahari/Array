//https://practice.geeksforgeeks.org/problems/5551749efa02ae36b6fdb3034a7810e84bd4c1a4/1
int unvisitedLeaves(int N, int leaves, int frogs[]) 
    {
         vector<bool> vis(leaves+1,false);
         for(int i=0;i<N;i++)
         if(frogs[i]==1)
         return 0;
         for(int i=0;i<N;i++)
         {
             if(!vis[frogs[i]] && frogs[i]<=leaves)
             for(int j=frogs[i];j<leaves+1;j+=frogs[i])
             vis[j] = true;
         }
         int cnt=0;
         for(int i=1;i<leaves+1;i++)
         {
             if(!vis[i])
             cnt++;
         }
         return cnt;
    }
