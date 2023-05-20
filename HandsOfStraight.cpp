//https://practice.geeksforgeeks.org/problems/hands-of-straights/1
bool isStraightHand(int N, int gs, vector<int> &hand) 
    {
        if((N%gs) != 0)
        return false;
        map<int,int> mp;
        
        for(int i=0;i<N;i++)
        mp[hand[i]]++;
        
        // for(auto it:mp)
        // cout<<it.first<<' '<<it.second<<'\n';
        sort(hand.begin(),hand.end());
        int cnt=0;
        for(auto x:hand)
        {
            int t = 0;
            bool f=true;
            while(t<gs) 
            {
                if(mp[x+t]<=0)
                {
                  f=false;
                  break;
                }
                t++;
            }
            if(!f)
            continue;
            t=0;
            while(t<gs){
                mp[t+x]--;
                t++;
            }
            cnt++;
        }
        return (cnt==(N/gs));
    }
