class Solution {
public:
    priority_queue<int> left; // max heap
    priority_queue<int, vector<int>, greater<int>> right; // min heap

    void balanceHeap() {
        if (left.size() < right.size()) {
            left.push(right.top());
            right.pop();
        }
        else if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }
    }

    void insertHeap(int &x) {

        if (left.empty()) {
            left.push(x);
            return;
        }

        if (x > left.top())
            right.push(x);
        else
            left.push(x);

        balanceHeap();
    }

    vector<double> getMedian(vector<int> &arr) {

        vector<double> ans;

        while (!left.empty()) left.pop();
        while (!right.empty()) right.pop();

        for (int x : arr) {

            insertHeap(x);

            if (left.size() > right.size())
                ans.push_back(left.top());
            else
                ans.push_back((left.top() + right.top()) / 2.0);
        }

        return ans;
    }
};