class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Create adjacency list with V vertices
        vector<vector<int>> adj(V);
        
        // Traverse all edges
        for (auto edge : edges) {
            int u = edge.first;
            int v = edge.second;
            
            // Since graph is undirected, add both connections
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return adj;
    }
};