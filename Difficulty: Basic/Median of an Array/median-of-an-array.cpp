class Solution {
  public:
    double findMedian(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        // If number of elements is odd
        if (n % 2 == 1) {
            return arr[n / 2];
        }
        
        // If number of elements is even
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
};