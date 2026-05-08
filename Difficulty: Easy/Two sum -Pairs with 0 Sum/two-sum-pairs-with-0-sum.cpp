class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        set<int> s;
        set<vector<int>> uniquePairs;

        for (int x : arr) {
            if (s.count(-x)) {
                vector<int> pair = {min(x, -x), max(x, -x)};
                uniquePairs.insert(pair);
            }
            s.insert(x);
        }

        for (auto &p : uniquePairs) {
            ans.push_back(p);
        }

        return ans;
    }
};