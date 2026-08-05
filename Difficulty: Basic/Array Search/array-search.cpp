class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                return i; // Return 0-based index
            }
        }
        return -1;
    }
};