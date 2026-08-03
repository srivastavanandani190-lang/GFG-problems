class Solution {
  public:
    long long int maxSumWithK(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Use long long for prefix sum to prevent integer overflow during calculations
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        
        long long maxSum = -1e18;
        long long minPrefixSum = 0;
        
        // Iterate through all possible end positions of length >= k
        for (int i = k; i <= n; i++) {
            minPrefixSum = min(minPrefixSum, prefix[i - k]);
            maxSum = max(maxSum, prefix[i] - minPrefixSum);
        }
        
        return maxSum;
    }
};