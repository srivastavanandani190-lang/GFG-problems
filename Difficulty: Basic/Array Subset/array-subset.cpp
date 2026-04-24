class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int j = 0;

        for (int i = 0; i < a.size() && j < b.size(); i++) {
            if (a[i] == b[j]) {
                j++;
            }
        }

        return j == b.size();
    }
};