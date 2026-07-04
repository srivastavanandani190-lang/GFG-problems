class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        int k = mat.size();

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;

        // Push first element of every array
        for (int i = 0; i < k; i++) {
            if (!mat[i].empty()) {
                pq.push({mat[i][0], {i, 0}});
            }
        }

        vector<int> ans;

        while (!pq.empty()) {
            auto element = pq.top();
            pq.pop();

            int val = element.first;
            int row = element.second.first;
            int col = element.second.second;

            ans.push_back(val);

            // Push next element from the same array
            if (col + 1 < mat[row].size()) {
                pq.push({mat[row][col + 1], {row, col + 1}});
            }
        }

        return ans;
    }
};