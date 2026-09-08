class Solution {
public:
    vector<vector<int>> sortedMatrix(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int> temp;

        // Step 1: Extract all elements into a 1D vector
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp.push_back(mat[i][j]);
            }
        }

        // Step 2: Sort the 1D vector
        sort(temp.begin(), temp.end());

        // Step 3: Put the sorted elements back into the 2D matrix
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = temp[k++];
            }
        }

        return mat;
    }
};