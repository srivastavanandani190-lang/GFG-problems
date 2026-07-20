class Solution {
public:
    vector<int> twoRepeated(vector<int>& arr) {
        vector<int> ans;
        
        for (int i = 0; i < arr.size(); i++) {
            int val = abs(arr[i]);
            
            // If already negative, val has appeared before
            if (arr[val] < 0) {
                ans.push_back(val);
            } else {
                arr[val] = -arr[val]; // Mark as visited
            }
        }
        
        return ans;
    }
};