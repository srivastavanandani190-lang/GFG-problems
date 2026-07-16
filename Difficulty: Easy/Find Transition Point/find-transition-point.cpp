class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        int answer = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == 1) {
                answer = mid;     // Track the current position of 1
                high = mid - 1;   // Look to the left for an earlier 1
            } else {
                low = mid + 1;    // Look to the right since it's a 0
            }
        }
        
        return answer;
    }
};