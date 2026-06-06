class Solution {
public:
    long long countSubarray(int arr[], int n, int k) {
        long long cnt = 0;
        int s = 0;

        for (int e = 0; e < n; e++) {
            if (arr[e] > k) {
                s = e + 1;
            }

            cnt += (e - s + 1);
        }

        long long total = 1LL * n * (n + 1) / 2;

        return total - cnt;
    }
};