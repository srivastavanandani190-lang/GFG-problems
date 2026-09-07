class Solution {
public:
    int uglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1; // The first ugly number is always 1

        // Pointers for multiples of 2, 3, and 5
        int p2 = 0, p3 = 0, p5 = 0; 

        for (int i = 1; i < n; i++) {
            // Find the next multiples
            int next2 = ugly[p2] * 2;
            int next3 = ugly[p3] * 3;
            int next5 = ugly[p5] * 5;

            // The next ugly number is the smallest of these multiples
            int next_ugly = min({next2, next3, next5});
            ugly[i] = next_ugly;

            // Move the pointer(s) forward if it matches the chosen minimum
            // (This also automatically skips duplicates like 2*3 and 3*2)
            if (next_ugly == next2) p2++;
            if (next_ugly == next3) p3++;
            if (next_ugly == next5) p5++;
        }

        return ugly[n - 1]; // Return the nth ugly number
    }
};