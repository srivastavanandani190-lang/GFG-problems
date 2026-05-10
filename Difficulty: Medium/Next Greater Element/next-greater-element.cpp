class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Remove smaller or equal elements
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            // Top element is next greater element
            if (!st.empty()) {
                ans[i] = st.top();
            }

            // Push current element into stack
            st.push(arr[i]);
        }

        return ans;
    }
};