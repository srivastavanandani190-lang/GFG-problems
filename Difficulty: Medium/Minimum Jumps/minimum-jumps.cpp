class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // If only one element, no jumps needed
        if (n == 1) return 0;
        
        // If first element is 0, can't move forward
        if (arr[0] == 0) return -1;
        
        int jumps = 1;
        int maxReach = arr[0];
        int steps = arr[0];
        
        for (int i = 1; i < n; i++) {
            // Reached the last index
            if (i == n - 1) return jumps;
            
            // Update the farthest reachable index
            maxReach = max(maxReach, i + arr[i]);
            
            // Use one step to move forward
            steps--;
            
            // If no steps left
            if (steps == 0) {
                jumps++;
                
                // Cannot move further
                if (i >= maxReach) return -1;
                
                // Reinitialize steps
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};