class Solution {
public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        unordered_map<int, int> freq;

        // Count frequencies
        for (int num : arr)
            freq[num]++;

        // Max Heap: {frequency, element}
        priority_queue<pair<int, int>> pq;

        for (auto it : freq)
            pq.push({it.second, it.first});

        vector<int> ans;

        while (k-- && !pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};