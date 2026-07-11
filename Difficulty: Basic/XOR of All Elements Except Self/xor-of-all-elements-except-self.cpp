class Solution {
  public:
    vector<int> getXor(vector<int>& arr) {
        int totalXor = 0;
        
        // Step 1: Calculate the XOR sum of all elements
        for (int num : arr) {
            totalXor ^= num;
        }
        
        // Step 2: Build the result vector
        vector<int> res;
        res.reserve(arr.size()); // Pre-allocate memory for performance
        
        for (int num : arr) {
            res.push_back(totalXor ^ num);
        }
        
        return res;
    }
};