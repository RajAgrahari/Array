//https://www.codechef.com/problems/MAIL_DELIVER
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,m,k;cin>>n>>m>>k;
        int start[k];
        for(int i=0;i<k;i++){
            cin>>start[i];
        }
        priority_queue<pair<int,int>> pq;
        vector<int> dist(n+1,0),vis(n+1,0);
        for(int i=0;i<k;i++){
            cin>>dist[start[i]];
            pq.push({dist[start[i]],start[i]});
            vis[start[i]]=1;
        }
        vector<int> adj[n+1];
        for(int i=0;i<m;i++){
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        while(pq.size()>0){
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            if(d==1) continue;
            for(int adjNode:adj[node]){
                vis[adjNode]=1;
                if(dist[adjNode]<d-1){
                    dist[adjNode]=d-1;
                    pq.push({d-1,adjNode});
                }
            }
        }
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                cout<<"NO"<<'\n';
                f=false;
                break;
            }
        }
        if(f)
        cout<<"YES"<<'\n';
	}
	return 0;
}
