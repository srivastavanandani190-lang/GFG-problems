class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());

        vector<vector<int>> ans;

        // Step 2: Traverse all intervals
        for (int i = 0; i < arr.size(); i++) {
            // If answer is empty or no overlap
            if (ans.empty() || arr[i][0] > ans.back()[1]) {
                ans.push_back(arr[i]);
            }
            // Overlap exists, so merge
            else {
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
        }

        return ans;
    }
}; 