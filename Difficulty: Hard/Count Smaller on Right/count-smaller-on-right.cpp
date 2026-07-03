class Solution {
public:
    vector<int> lowerArray(vector<int> &arr) {
        int n = arr.size();

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> rank;
        int r = 1;

        for (int x : temp) {
            if (!rank.count(x))
                rank[x] = r++;
        }

        vector<int> bit(r + 1, 0);

        auto update = [&](int idx) {
            while (idx < bit.size()) {
                bit[idx]++;
                idx += idx & -idx;
            }
        };

        auto query = [&](int idx) {
            int sum = 0;
            while (idx > 0) {
                sum += bit[idx];
                idx -= idx & -idx;
            }
            return sum;
        };

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int pos = rank[arr[i]];
            ans[i] = query(pos - 1); // smaller elements on right
            update(pos);
        }

        return ans;
    }
};