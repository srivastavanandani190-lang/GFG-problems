class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == k) {
                ans = mid;        // store answer
                end = mid - 1;    // move left to find FIRST occurrence
            }
            else if (arr[mid] > k) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        if (ans == -1) return -1;
        return ans;   // 1-based indexing
    }
};