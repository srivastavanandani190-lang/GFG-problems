class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
    int n = arr.size();

    // 1. Find the pivot index
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // 2. If pivot does not exist, reverse the whole array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // 3. Find the element from the right that is greater than pivot
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // 4. Reverse the elements from pivot + 1 to end
    int left = pivot + 1, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    }
};