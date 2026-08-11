class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        
        // Frequency array to store count of numbers from 1 to n
        vector<int> freq(n + 1, 0);
        
        // Count occurrences of each element
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        int repeating = -1;
        int missing = -1;
        
        // Find repeating and missing numbers
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                repeating = i;
            } else if (freq[i] == 0) {
                missing = i;
            }
        }
        
        return {repeating, missing};
    }
};