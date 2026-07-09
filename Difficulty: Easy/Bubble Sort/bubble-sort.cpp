class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();

        // n-1 passes
        for(int i = 0; i < n - 1; i++) {
            bool swapped = false; // optimization: check if any swap happened

            // last i elements are already in place
            for(int j = 0; j < n - 1 - i; j++) {
                if(arr[j] > arr[j + 1]) { // swap if out of order
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            // if no swaps in a pass, array is already sorted
            if(!swapped) break;
        }
    }
};