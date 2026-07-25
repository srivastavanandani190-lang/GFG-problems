class Solution {
public:
    string frequencySort(string &s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Stores pair<count, char> using std::greater for min-heap behavior
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> minHeap;

        for (auto& [ch, count] : freq) {
            minHeap.push({count, ch});
        }

        string result = "";
        while (!minHeap.empty()) {
            auto [count, ch] = minHeap.top();
            minHeap.pop();
            result.append(count, ch);
        }

        return result;
    }
};