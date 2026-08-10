class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        // Rightmost element is always a leader
        int max_from_right = arr[n - 1];
        ans.push_back(max_from_right);
        
        // Traverse the array from second last element to the beginning
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];
                ans.push_back(arr[i]);
            }
        }
        
        // Reverse the array to restore original order
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};