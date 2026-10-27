class Solution {
public:
    void bfs(int i,vector<vector<int>>adj,vector<bool>&vis,int &node,int &edge){
        int n=adj.size();
        queue<int>q;
        q.push(i);
        vis[i]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            node++;
            edge+=adj[curr].size();
            for(auto it:adj[curr]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int node=0;
                int edgeCount=0;
                bfs(i,adj,vis,node,edgeCount);
                edgeCount=edgeCount/2;
                int requiredEdge=(node*(node-1))/2;
                if(edgeCount==requiredEdge){
                    count++;
                }
            }
        }
        return count;

    }
};