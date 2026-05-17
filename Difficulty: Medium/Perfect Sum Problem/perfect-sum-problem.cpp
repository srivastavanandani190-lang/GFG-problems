class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        
        // dp[j] = number of subsets with sum j
        vector<int> dp(target + 1, 0);
        
        // Empty subset gives sum 0
        dp[0] = 1;
        
        for (int num : arr) {
            // Traverse backwards to avoid reuse of same element
            for (int j = target; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }
        
        return dp[target];
    }
};