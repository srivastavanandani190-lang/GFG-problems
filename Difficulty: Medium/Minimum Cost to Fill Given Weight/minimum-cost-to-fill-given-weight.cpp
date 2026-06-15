class Solution {
  public:
    int minimumCost(vector<int> &cost, int w) {
        const int INF = 1e9;
        vector<int> dp(w + 1, INF);

        dp[0] = 0;

        for (int j = 0; j < cost.size(); j++) {
            if (cost[j] == -1) continue;   // packet unavailable

            int wt = j + 1;
            for (int i = wt; i <= w; i++) {
                if (dp[i - wt] != INF) {
                    dp[i] = min(dp[i], dp[i - wt] + cost[j]);
                }
            }
        }

        return (dp[w] == INF) ? -1 : dp[w];
    }
};