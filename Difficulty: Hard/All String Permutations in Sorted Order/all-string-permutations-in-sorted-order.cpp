class Solution {
private:
    void permutation(string& nums, int n, vector<string>& ans, string& temp, vector<bool>& visited) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                temp.push_back(nums[i]);
                permutation(nums, n, ans, temp, visited);
                temp.pop_back();
                visited[i] = false;
            }
        }
    }

public:
    vector<string> permutation(string s) {
        vector<string> ans;
        string temp = "";
        int n = s.size();
        vector<bool> visited(n, false);
        
        permutation(s, n, ans, temp, visited);
        
        // Sort the final result to ensure lexicographically non-decreasing order
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};