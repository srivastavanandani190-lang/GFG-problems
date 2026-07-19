class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int low = 0;
        int high = b.size() - 1;
        int ans = a.size() - 1; // Default to the last index of 'a' if no mismatch is found earlier

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If elements match, the extra element must be further to the right
            if (a[mid] == b[mid]) {
                low = mid + 1;
            } 
            // If they don't match, this mid could be the extra element,
            // or the extra element is further to the left
            else {
                ans = mid;
                high = mid - 1;
            }
        }
        
        return ans;
    }
};