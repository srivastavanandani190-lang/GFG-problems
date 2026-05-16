class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        
        // Sort the array
        sort(arr.begin(), arr.end());
        
        // Initial difference
        int ans = arr[n - 1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        
        // Traverse the array
        for (int i = 0; i < n - 1; i++) {
            
            // If decreasing makes height negative, skip
            if (arr[i + 1] - k < 0)
                continue;
            
            int mini = min(smallest, arr[i + 1] - k);
            int maxi = max(largest, arr[i] + k);
            
            ans = min(ans, maxi - mini);
        }
        
        return ans;
    }
};