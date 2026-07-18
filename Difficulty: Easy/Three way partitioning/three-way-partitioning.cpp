class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;
        
        while (mid <= high) {
            if (arr[mid] < a) {
                // Element belongs to the first part
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } 
            else if (arr[mid] >= a && arr[mid] <= b) {
                // Element belongs to the middle part (already in place)
                mid++;
            } 
            else {
                // Element belongs to the third part
                swap(arr[mid], arr[high]);
                high--;
                // Do not increment mid here because the swapped element 
                // from the back needs to be evaluated.
            }
        }
    }
};