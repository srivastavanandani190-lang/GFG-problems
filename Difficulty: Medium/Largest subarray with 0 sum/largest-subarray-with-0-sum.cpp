class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int, int> mp;
        int sum = 0, maxi = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            // If sum becomes 0, subarray from 0 to i
            if (sum == 0) {
                maxi = i + 1;
            }
            
            // If sum already exists, calculate length
            if (mp.find(sum) != mp.end()) {
                maxi = max(maxi, i - mp[sum]);
            } 
            else {
                // Store first occurrence of sum
                mp[sum] = i;
            }
        }
        
        return maxi;
    }
};