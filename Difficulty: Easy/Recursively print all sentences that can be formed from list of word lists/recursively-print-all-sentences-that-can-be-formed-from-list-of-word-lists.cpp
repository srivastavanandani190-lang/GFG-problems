// User function Template for C++
class Solution {
  public:
  
    void solve(int i, vector<vector<string>>& list, vector<string>& temp, vector<vector<string>>& ans) {
        if (i == list.size()) {
            ans.push_back(temp);
            return;
        }
        
        for (int j = 0; j < list[i].size(); j++) {
            temp.push_back(list[i][j]);   // choose
            solve(i + 1, list, temp, ans); // recurse
            temp.pop_back();              // backtrack
        }
    }
  
    vector<vector<string>> sentences(vector<vector<string>>& list) {
        vector<vector<string>> ans;
        vector<string> temp;
        
        solve(0, list, temp, ans);
        
        return ans;
    }
};