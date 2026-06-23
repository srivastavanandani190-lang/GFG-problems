class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
     
    int n = arr.size();

    queue<int> q;      // stores indices of negative elements

    // Process first K-1 elements
    for (int i = 0; i < k - 1; i++) {
        if (arr[i] < 0)
            q.push(i);
    }

    vector<int> ans;

    for (int i = k - 1; i < n; i++) {

        // Add current element if negative
        if (arr[i] < 0)
            q.push(i);

        // Remove elements that are out of the current window
        while (!q.empty() && q.front() <= i - k)
            q.pop();

        // First negative element in current window
        if (q.empty())
            ans.push_back(0);
        else
            ans.push_back(arr[q.front()]);
    }

    return ans;
}
    
};