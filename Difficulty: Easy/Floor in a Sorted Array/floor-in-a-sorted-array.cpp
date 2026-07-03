class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid;        // possible answer
                low = mid + 1;    // move right for larger value
            } else {
                high = mid - 1;   // move left
            }
        }
        return ans;
    }
};