class Solution {
  public:
    int getSingle(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] != arr[i + 1]) {
                return arr[i];
            }
        }

        return arr[n - 1]; // single element is at the end
    }
};