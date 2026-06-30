class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        priority_queue<int> p;

        for (int x : arr)
            p.push(x);

        vector<int> res;

        while (k--) {
            res.push_back(p.top());
            p.pop();
        }

        return res;
    }
};