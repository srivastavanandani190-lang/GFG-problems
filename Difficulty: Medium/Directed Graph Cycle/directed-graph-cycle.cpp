class Solution {
  public:
    
    bool dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &pathVisited) {
        visited[node] = 1;
        pathVisited[node] = 1;
        
        for(auto it : adj[node]) {
            if(!visited[it]) {
                if(dfs(it, adj, visited, pathVisited))
                    return true;
            }
            else if(pathVisited[it]) {
                return true; // cycle detected
            }
        }
        
        pathVisited[node] = 0; // backtrack
        return false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<int> adj[V];
        
        // Build adjacency list
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        vector<int> visited(V, 0), pathVisited(V, 0);
        
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                if(dfs(i, adj, visited, pathVisited))
                    return true;
            }
        }
        
        return false;
    }
};