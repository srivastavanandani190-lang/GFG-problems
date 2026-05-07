class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0;
        
        // Calculate total sum
        for(int num : arr) {
            totalSum += num;
        }
        
        int leftSum = 0;
        
        // Traverse array
        for(int i = 0; i < arr.size(); i++) {
            
            // Remove current element from totalSum
            totalSum -= arr[i];
            
            // Check equilibrium condition
            if(leftSum == totalSum) {
                return i;
            }
            
            // Add current element to leftSum
            leftSum += arr[i];
        }
        
        return -1;
    }
};