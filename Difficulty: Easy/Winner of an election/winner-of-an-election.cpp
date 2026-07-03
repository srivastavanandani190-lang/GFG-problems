class Solution {
  public:
    vector<string> winner(string arr[], int n) {
        unordered_map<string, int> freq;

        // Count votes for each candidate
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        string winnerName = "";
        int maxVotes = 0;

        // Find candidate with max votes, lexicographically smaller if tie
        for (auto& p : freq) {
            string name = p.first;
            int votes = p.second;

            if (votes > maxVotes || (votes == maxVotes && name < winnerName)) {
                maxVotes = votes;
                winnerName = name;
            }
        }

        return {winnerName, to_string(maxVotes)};
    }
};