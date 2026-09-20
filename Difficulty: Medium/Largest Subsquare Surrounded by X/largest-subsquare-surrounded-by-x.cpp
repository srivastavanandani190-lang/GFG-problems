class Solution {
public:
    int largestSubsquare(vector<vector<char>>& mat) {
        int n = mat.size();
        if (n == 0) return 0;

        vector<vector<int>> top(n, vector<int>(n, 0));
        vector<vector<int>> left(n, vector<int>(n, 0));

        // Precompute the number of continuous 'X's upwards and leftwards for each cell
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 'X') {
                    top[i][j] = (i > 0 ? top[i - 1][j] : 0) + 1;
                    left[i][j] = (j > 0 ? left[i][j - 1] : 0) + 1;
                }
            }
        }

        int max_len = 0;

        // Iterate from bottom-right to top-left to maximize early pruning
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                // The maximum possible square ending at (i, j) is bounded by the min of top and left consecutive 'X's
                int possible_len = min(top[i][j], left[i][j]);

                // Check if the top and left edges of this potential square also consist of 'X's
                while (possible_len > max_len) {
                    if (top[i][j - possible_len + 1] >= possible_len && 
                        left[i - possible_len + 1][j] >= possible_len) {
                        max_len = possible_len;
                        break;
                    }
                    possible_len--;
                }
            }
        }

        return max_len;
    }
};