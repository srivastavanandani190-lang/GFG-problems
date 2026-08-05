class Solution {
public:
    int Partition(vector<int> &arr, int start, int end) {
        int pos = start;
        for (int i = start; i <= end; i++) {
            if (arr[i] <= arr[end]) {
                swap(arr[i], arr[pos]);
                pos++;
            }
        }
        return pos - 1;
    }

    void QuickSort(vector<int> &arr, int start, int end) {
        if (start >= end) {
            return;
        }
        int pivot = Partition(arr, start, end);
        QuickSort(arr, start, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }

    void sortArr(vector<int> &arr) {
        // Corrected: pass the actual last index of the array
        QuickSort(arr, 0, arr.size() - 1);
    }
};