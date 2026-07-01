class Solution {
public:
    vector<int> kthLargest(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            minHeap.push(arr[i]);

            // Keep only the k largest elements
            if (minHeap.size() > k) {
                minHeap.pop();
            }

            // If less than k elements, kth largest doesn't exist
            if (minHeap.size() < k) {
                ans.push_back(-1);
            } else {
                ans.push_back(minHeap.top());
            }
        }

        return ans;
    }
};