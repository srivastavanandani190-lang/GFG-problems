class Solution {
public:
    vector<int> findSmallestRange(vector<vector<int>>& mat) {

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > p;

        int maximum = INT_MIN;

        // Push first element of every row
        for (int i = 0; i < mat.size(); i++) {
            p.push({mat[i][0], {i, 0}});
            maximum = max(maximum, mat[i][0]);
        }

        int minimum = p.top().first;

        vector<int> ans = {minimum, maximum};

        while (p.size() == mat.size()) {

            auto temp = p.top();
            p.pop();

            int row = temp.second.first;
            int col = temp.second.second;

            // Move to next element in the same row
            if (col + 1 < mat[row].size()) {

                col++;

                p.push({mat[row][col], {row, col}});

                maximum = max(maximum, mat[row][col]);
                minimum = p.top().first;

                if (maximum - minimum < ans[1] - ans[0]) {
                    ans[0] = minimum;
                    ans[1] = maximum;
                }
            }
        }

        return ans;
    }
};