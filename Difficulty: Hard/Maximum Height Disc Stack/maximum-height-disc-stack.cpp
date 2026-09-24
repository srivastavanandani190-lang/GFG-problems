class Solution {
public:
    int maxStackHeight(vector<int>& r, vector<int>& h) {
        int n = r.size();

        // Step 1: Pair up radii and heights
        vector<pair<int, int>> discs(n);
        vector<int> unique_h = h;

        // Coordinate compression for heights
        sort(unique_h.begin(), unique_h.end());
        unique_h.erase(unique(unique_h.begin(), unique_h.end()), unique_h.end());

        for (int i = 0; i < n; i++) {
            discs[i] = {r[i], h[i]};
        }

        // Step 2: Sort discs (Radius Ascending, Height Descending on ties)
        sort(discs.begin(), discs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first != b.first)
                return a.first < b.first;
            return a.second > b.second;
        });

        // Step 3: Initialize Binary Indexed Tree (BIT) for prefix maximums
        int m = unique_h.size();
        vector<int> bit(m + 1, 0);

        auto update = [&](int idx, int val) {
            for (; idx <= m; idx += idx & -idx) {
                bit[idx] = max(bit[idx], val);
            }
        };

        auto query = [&](int idx) {
            int ans = 0;
            for (; idx > 0; idx -= idx & -idx) {
                ans = max(ans, bit[idx]);
            }
            return ans;
        };

        int max_height_overall = 0;

        // Step 4: Traverse and find the max height stack
        for (int i = 0; i < n; i++) {
            int current_h = discs[i].second;

            // Get the 1-based index (rank) of the current height
            int rank = lower_bound(unique_h.begin(), unique_h.end(), current_h) - unique_h.begin() + 1;

            // Query the max height from strictly smaller heights (up to rank - 1)
            int max_prev_h = query(rank - 1);
            int total_h = max_prev_h + current_h;

            max_height_overall = max(max_height_overall, total_h);

            // Update the BIT with the new total stack height at the current rank
            update(rank, total_h);
        }

        return max_height_overall;
    }
};