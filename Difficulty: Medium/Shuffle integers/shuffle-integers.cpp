class Solution {
public:
    void shuffleArray(int arr[], int n) {
        vector<int> ans(n);

        int index = 0;
        for (int i = 0; i < n / 2; i++) {
            ans[index++] = arr[i];
            ans[index++] = arr[i + n / 2];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = ans[i];
        }
    }
};