class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> result;

        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            // Add the largest remaining element
            result.push_back(arr[right]);
            right--;

            // Add the smallest remaining element
            if (left <= right) {
                result.push_back(arr[left]);
                left++;
            }
        }

        return result;
    }
};