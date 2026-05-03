class Solution {
  public:
    void solve(int i, int j, int n, int m, vector<vector<int>> &mat,
               vector<int> &path, vector<vector<int>> &ans) {
        
        // Add current cell value to path
        path.push_back(mat[i][j]);
        
        // If destination is reached
        if (i == n - 1 && j == m - 1) {
            ans.push_back(path);
            path.pop_back(); // backtrack
            return;
        }
        
        // Move Down
        if (i + 1 < n) {
            solve(i + 1, j, n, m, mat, path, ans);
        }
        
        // Move Right
        if (j + 1 < m) {
            solve(i, j + 1, n, m, mat, path, ans);
        }
        
        // Backtrack
        path.pop_back();
    }

    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &mat) {
        vector<vector<int>> ans;
        vector<int> path;
        
        solve(0, 0, n, m, mat, path, ans);
        
        return ans;
    }
};