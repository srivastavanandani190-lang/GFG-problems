#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int shortestPath(vector<vector<int>> &mat) {
        int n = mat.size();
        if (n == 0) return -1;
        int m = mat[0].size();

        // Step 1: Create a safe grid and mark all landmines + adjacent cells as 0 (unsafe)
        vector<vector<int>> safe(n, vector<int>(m, 1));

        // Direction vectors for Up, Down, Left, Right
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    safe[i][j] = 0; // Mark landmine as unsafe

                    // Mark all 4 adjacent cells as unsafe
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dr[k];
                        int nj = j + dc[k];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            safe[ni][nj] = 0;
                        }
                    }
                }
            }
        }

        // Step 2: Multi-source BFS from all safe cells in the leftmost column
        queue<pair<pair<int, int>, int>> q;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            if (safe[i][0] == 1) {
                // Store {{row, col}, distance}. 
                // Distance is 1-based because reaching the first cell counts as 1 step.
                q.push({{i, 0}, 1}); 
                visited[i][0] = true;
            }
        }

        // Step 3: Traverse the matrix
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            int r = curr.first.first;
            int c = curr.first.second;
            int dist = curr.second;

            // If we have reached the rightmost column, return the steps
            if (c == m - 1) {
                return dist;
            }

            // Explore all 4 valid directions
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                // If it's within bounds, is safe, and hasn't been visited yet
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    if (safe[nr][nc] == 1 && !visited[nr][nc]) {
                        visited[nr][nc] = true;
                        q.push({{nr, nc}, dist + 1});
                    }
                }
            }
        }

        // If we exhaust the queue without reaching the last column
        return -1;
    }
};