class Solution {
public:
    vector<int> largestSquare(vector<vector<int>> M, int R, int C, int K, int Q,
                              int q_i[], int q_j[]) {

        // Step 1: Build prefix sum
        vector<vector<int>> pref(R + 1, vector<int>(C + 1, 0));
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                pref[i+1][j+1] = M[i][j] 
                               + pref[i][j+1] 
                               + pref[i+1][j] 
                               - pref[i][j];
            }
        }

        // Helper function to get sum of submatrix
        auto getSum = [&](int x1, int y1, int x2, int y2) {
            return pref[x2+1][y2+1] 
                 - pref[x1][y2+1] 
                 - pref[x2+1][y1] 
                 + pref[x1][y1];
        };

        vector<int> ans;

        // Process each query
        for (int q = 0; q < Q; q++) {
            int i = q_i[q];
            int j = q_j[q];

            int max_radius = min({i, j, R - i - 1, C - j - 1});
            int best = 0;  // Default: no positive side length square

            for (int radius = 0; radius <= max_radius; radius++) {
                int x1 = i - radius;
                int y1 = j - radius;
                int x2 = i + radius;
                int y2 = j + radius;

                int ones = getSum(x1, y1, x2, y2);

                if (ones > K) {
                    break;
                }
                best = 2 * radius + 1;
            }

            ans.push_back(best);
        }

        return ans;
    }
};