 class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        int n = arr.size();
        // Swap the k-th element from start (index k-1) 
        // with the k-th element from end (index n-k)
        swap(arr[k - 1], arr[n - k]);
    }
};