#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    int minimumEdgeReversal(vector<vector<int>> &edges, int n, int src, int dst) {
        // Create an adjacency list: adj[u] = {v, weight}
        // weight = 0 for original edges, weight = 1 for reversed edges
        vector<vector<pair<int, int>>> adj(n + 1);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back({v, 0}); 
            adj[v].push_back({u, 1}); 
        }

        // Initialize distances with a large value
        vector<int> dist(n + 1, 1e9);
        deque<int> dq;

        // Start from the source
        dist[src] = 0;
        dq.push_back(src);

        while (!dq.empty()) {
            int node = dq.front();
            dq.pop_front();

            // Early exit if we reach the destination
            if (node == dst) {
                return dist[node];
            }

            // Traverse all neighbors
            for (auto& neighbor : adj[node]) {
                int adjNode = neighbor.first;
                int weight = neighbor.second;

                // Relaxation step
                if (dist[node] + weight < dist[adjNode]) {
                    dist[adjNode] = dist[node] + weight;

                    // 0-1 BFS deque logic: 
                    // 0 weight edges go to the front, 1 weight edges go to the back
                    if (weight == 0) {
                        dq.push_front(adjNode);
                    } else {
                        dq.push_back(adjNode);
                    }
                }
            }
        }

        // If the destination is unreachable
        return dist[dst] == 1e9 ? -1 : dist[dst];
    }
};