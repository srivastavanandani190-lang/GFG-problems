class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& nums) {
        unordered_map<int, int> res;

        // Count frequencies of all numbers
        for(int i = 0; i < nums.size(); i++) {
            res[nums[i]]++;
        }

        vector<int> ans;

        // Iterate through original array to maintain order of first occurrence
        for(int i = 0; i < nums.size(); i++) {
            if(res[nums[i]] > 0 && res[nums[i]] % 2 == 0) {
                ans.push_back(nums[i]);
                res[nums[i]] = 0; // Mark as added to avoid pushing duplicates
            }
        }

        // If no element with even occurrences exists, return -1
        if (ans.empty()) {
            return {-1};
        }

        return ans;
    }
};