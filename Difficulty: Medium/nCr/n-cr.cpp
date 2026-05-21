class Solution {
  public:
    int nCr(int n, int r) {
        // If r is greater than n
        if (r > n) return 0;

        // Because nCr == nC(n-r)
        r = min(r, n - r);

        long long ans = 1;

        for (int i = 0; i < r; i++) {
            ans = ans * (n - i);
            ans = ans / (i + 1);
        }

        return (int)ans;
    }
};