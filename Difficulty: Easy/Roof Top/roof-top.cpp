class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int max_steps = 0;
        int current_steps = 0;
        
        for (size_t i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] > arr[i]) {
                current_steps++;
                max_steps = max(max_steps, current_steps);
            } else {
                current_steps = 0;
            }
        }
        
        return max_steps;
    }
};
