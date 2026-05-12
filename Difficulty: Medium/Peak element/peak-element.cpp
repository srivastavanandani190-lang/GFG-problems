class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If middle element is smaller than next,
            // then peak lies on right side
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            }
            // Otherwise peak lies on left side including mid
            else {
                high = mid;
            }
        }

        return low; // or high
    }
};