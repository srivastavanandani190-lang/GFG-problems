class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> res;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                if (res.empty() || res.back() != arr[i]) {
                    res.push_back(arr[i]);
                }
            }
        }
        return res;
    }
};
