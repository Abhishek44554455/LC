class Solution {
public:
    void dfs(int node,vector<bool>&vis,vector<vector<int>>graph){
        vis[node]=1;
        for(auto it:graph[node]){
            if(!vis[it]){
                dfs(it,vis,graph);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
        // change the matrix to list
        vector<vector<int>>graph(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j]==1 && i!=j){
                    graph[i].push_back(j);
                }
            }
        }
        vector<bool>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,graph);
            }
        }
        return count;
        
    }
};