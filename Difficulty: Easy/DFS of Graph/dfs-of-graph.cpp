class Solution {
  public:
  
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& result) {
        visited[node] = true;       // Mark current node as visited
        result.push_back(node);     // Add node to DFS traversal
        
        // Visit all adjacent vertices in given order
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfsHelper(neighbor, adj, visited, result);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, false);
        vector<int> result;
        
        // Start DFS from vertex 0
        dfsHelper(0, adj, visited, result);
        
        return result;
    }
};