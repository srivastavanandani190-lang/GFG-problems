class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < arr[i-1]) // if current is smaller than previous
                return false; // not sorted
        }
        return true; // all elements passed the check
    }
};