class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // If there are less than 2 elements, return -1
        if (arr.size() < 2) {
            return {-1};
        }
        
        sort(arr.begin(), arr.end());
        
        int smallest = arr[0];
        
        // Loop to find the first element greater than the smallest
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > smallest) {
                return {smallest, arr[i]};
            }
        }
        
        // If loop finishes, all elements were identical
        return {-1};
    }
};