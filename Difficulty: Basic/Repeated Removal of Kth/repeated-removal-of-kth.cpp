class Solution {
public:
    int getCandidate(int n, int k) {
        int result = 1;

        // Find the highest power of k that is <= n
        while (result * k <= n) {
            result *= k;
        }

        return result;
    }
};