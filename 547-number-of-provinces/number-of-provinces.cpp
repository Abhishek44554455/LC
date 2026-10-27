class Solution {
public:
    void bfs(vector<vector<int>> adjList, vector<bool>& vis, int i) {
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto it : adjList[node]) {
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adjMat) {
        int n = adjMat.size();
        vector<vector<int>> adjList(n);
        // change the adjacency Matrix into adjacency List
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adjMat[i][j] == 1 && i != j ){
                        adjList[i].push_back(j);
                        // adjList[j].push_back(i);
                    }
            }
        }
        vector<bool> vis(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count++;
                bfs(adjList, vis, i);
            }
        }
        return count;
    }
};