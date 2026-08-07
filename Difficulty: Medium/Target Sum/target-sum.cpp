class Solution {
public:
    int solve(vector<int>& nums, int index, int currentSum, int target, vector<unordered_map<int, int>>& memo) {
        // Base case: if we have considered all elements
        if (index == nums.size()) {
            return currentSum == target ? 1 : 0;
        }

        // Check if the state (index, currentSum) is already computed
        if (memo[index].count(currentSum)) {
            return memo[index][currentSum];
        }

        // Choice 1: Add current element with '+' symbol
        int add = solve(nums, index + 1, currentSum + nums[index], target, memo);

        // Choice 2: Add current element with '-' symbol
        int subtract = solve(nums, index + 1, currentSum - nums[index], target, memo);

        // Store result in memoization table and return
        return memo[index][currentSum] = add + subtract;
    }

    int totalWays(vector<int>& arr, int target) {
        int n = arr.size();
        vector<unordered_map<int, int>> memo(n);
        return solve(arr, 0, 0, target, memo);
    }
};