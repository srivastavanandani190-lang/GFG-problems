class Solution {
public:
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int ans = 1;

        for (int x : arr) {
            if (x == ans) {
                ans++;
            }
        }

        return ans;
    }
};