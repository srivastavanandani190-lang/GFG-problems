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

        for(int j=0;j<n;j++){
            int s=0,e=n-1;
            while(s<e){
                swap(mat[s][j],mat[e][j]);
                s++;
                e--;
            }
        }
    }
};