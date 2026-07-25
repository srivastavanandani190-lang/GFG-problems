class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int n = arr1.size();
        int m = arr2.size();
        
        // Start one pointer at the beginning of arr1 and the other at the end of arr2
        int left = 0;
        int right = m - 1;
        
        int min_diff = INT_MAX;
        vector<int> ans(2);
        
        while (left < n && right >= 0) {
            int current_sum = arr1[left] + arr2[right];
            int current_diff = abs(current_sum - x);
            
            // If we found a pair closer to x than our previous best, update the result
            if (current_diff < min_diff) {
                min_diff = current_diff;
                ans = {arr1[left], arr2[right]};
            }
            
            // Move pointers based on how current_sum compares to target x
            if (current_sum > x) {
                right--; // Sum is too large, decrease it by moving left in arr2
            } else {
                left++;  // Sum is too small or exact match, increase it by moving right in arr1
            }
        }
        
        return ans;
    }
};