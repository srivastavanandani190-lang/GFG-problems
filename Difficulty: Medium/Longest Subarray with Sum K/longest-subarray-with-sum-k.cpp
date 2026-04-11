class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int prefixSum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];
            
            // Case 1: if sum itself equals k
            if(prefixSum == k) {
                maxLen = i + 1;
            }
            
            // Case 2: if (prefixSum - k) exists
            if(mp.find(prefixSum - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum - k]);
            }
            
            // Store only first occurrence
            if(mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }
        
        return maxLen;
    }
};