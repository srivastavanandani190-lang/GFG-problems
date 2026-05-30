class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse columns
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n; j++) {
                swap(mat[i][j], mat[n - i - 1][j]);
            }
        }
    }
};