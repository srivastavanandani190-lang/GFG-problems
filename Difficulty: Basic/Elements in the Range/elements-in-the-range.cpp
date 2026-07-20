class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        unordered_set<int> present_elements(arr.begin(), arr.end());
        
        for (int i = start; i <= end; i++) {
            if (present_elements.find(i) == present_elements.end()) {
                return false;
            }
        }
        
        return true;
    }
};